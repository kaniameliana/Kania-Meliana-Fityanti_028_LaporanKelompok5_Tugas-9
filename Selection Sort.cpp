#include <iostream>
using namespace std;

// berfungsi untuk menukar posisi dua elemen
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// berfungsi untuk mencetak array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {

      // Untuk mengurutkan dalam urutan menurun, ubah > menjadi < pada baris ini.
      // Pilih elemen minimum di setiap loop.
      if (array[i] < array[min_idx])
        min_idx = i;
    }

    // letakkan min pada posisi yang benar
    swap(&array[min_idx], &array[step]);
  }
}

// driver code
int main() {
  int data[] = {4, 20, 3, 9, 13};
  int size = sizeof(data) / sizeof(data[0]);
  selectionSort(data, size);
  cout << "Sorted array in Acsending Order:\n";
  printArray(data, size);
}
