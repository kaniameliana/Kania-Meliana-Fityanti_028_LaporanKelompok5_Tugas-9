#include <iostream>

using namespace std;

int main(){

    // mendeklarasikan variabel-variabel
    int array[100], n, i, j,tmp;
    // array untuk sorting
    // n untuk menentukan jumlah array atau elemen yang dimasukkan
    // i berguna untuk looping pertama
    // j berguna untuk looping kedua
    // tmp sebuah variabel kosong untuk penempatan sementara

    cout<<"BUBBLE SORT \n"<<endl;
    // masukkan perintah
    cout << "Masukkan banyak elemen: ";
    cin >> n;
    cout << "Masukkan nilainya: \n";

    // memasukkan data ke dalam array
    for (i = 0; i < n; i++){
        cin >> array[i];
    }

    // looping akan berjalan sesuai jumlah data array atau elemen
    // looping pertama
    for (i = 0; i < n; i++){ 
        // looping kedua
        for (j = 0; j < n - i - 1; j++){

        // proses dimulai dan akan tetap berjalan meskipun nilai data sudah terurut
            if (array[j] > array[j + 1]){
            // menempatkan nilai sementara
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }

    // menampilkan hasil akhir sortingan
    cout << "Hasil array sudah di sorting: \n";
    for (i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    cout << "\n";
}
