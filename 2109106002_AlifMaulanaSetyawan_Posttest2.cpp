// Library 
#include<iostream>
#include<iomanip>
using namespace std;

// Fungsi utama
int main(){
    int i, j, x, y;

    // Deklarasi Array
    int awan_02[5][5];

    // Loop nilai elemen 
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){

            x = i;
            y = j;

            // Rumus Fungsi f(x, y)
            awan_02[i][j] = (((2*x) - (y * y) + 2) / 2);
            
        }
    }

    // Display Tambahan
    cout << "============================================================================================" << endl;
    cout << "-----------------------------MENAMPILKAN NILAI & ALAMAT ARRAY-------------------------------" << endl;
    cout << "============================================================================================" << endl;
    cout << "Nilai elemen dihitung dengan rumus : " << endl;
    cout << "\n2 digit NIM Akhir = 02" << endl;
    cout << "(2x - y^2 + 2) / 2" << endl;
    cout << "" << endl;

    // Bentuk Matriks
    cout << "Bentuk Matriks 5x5 :" << endl;
    cout << "" << endl;
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            
            cout << setw(4) << awan_02[i][j]; 
        }
        cout << endl;
    }
    cout << "" << endl;

    // Loop output nilai & alamat
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            
            // Pointer
            int *ptr = awan_02[i];

            cout << "Pada Index ke-" << "[" << i << "," << j << "]" << " Nilai Elemen-nya Adalah " << *(ptr + j) << endl;
            cout << "Dengan Alamat : " << ptr + j << endl;
            cout << "" << endl;
        }
    }

    return 0;
}