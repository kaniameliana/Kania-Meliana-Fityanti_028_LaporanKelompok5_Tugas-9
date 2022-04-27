// Shabinna Rahmadilla Santoso - 004 - 2021B
//Insertion Sort

#include <iostream>
using namespace std;

// Fungsi Mengurutkan Array Menggunakan Insertion Sort
int main()
{
	//Proses Memasukkan Array
	int data_array;
	cout << " Masukkan Jumlah Array : ";
	cin >>  data_array;
	int array [data_array]; //Deklarasi Array
	
	// Mencetak Angka 
	// Proses Memasukkan Angka 
	for ( int i = 0; i < data_array; i++ ){
		cout << "Masukkan Angka Ke Indeks " << i << " : ";
		cin >> array [i];
		cout << endl;
	}
	
	// Proses Penyortingannya
	// Membandingkan kunci ke setiap elemen sebelah kiri hingga elemen terkecil
	for ( int i = 1; i < data_array; i++ ){
		int key = array [i]; //Menandakan keberadaan angka, Menentukkan proses
		int j = i - 1;
		while ( j >= 0 && array [j] > key){
			array [j+1] = array [j]; 
			j--; //Untuk menghentikan looping jika angka minus
		}
		array [j+1] = key; //Memasukkan array di tempat yang benar
	}
	
	// Proses Menampilkan Hasil Penyortingan dengan Insertion Sort
	cout <<  " Hasil Penyortingann" << endl;
	for ( int m = 0; m <  data_array; m++){
		cout << array [m] << " ";
	}
	return 0;
}
