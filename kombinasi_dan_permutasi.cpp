#include <iostream>       // Library untuk fungsi input & output
#include <windows.h>      // Library untuk fungsi bawaan dari windows
using namespace std;      // Memberitahukan compiler bahwa sedang menggunakan keyword library standar

int faktorial (int nilai)    // Membuat fungsi untuk faktorial agar dapat menghitung kombinasi dan permutasi dengan parameter nilai
    {
        // Mendeklarasikan hasil, kemudian membuat kondisi if...else yang akan melakukan perhitungan faktorial

        int hasil;
        if (nilai <= 1)
            hasil = 1;
        else
            hasil = (nilai * faktorial(nilai-1));
        return (hasil);
    }

int kombinasi (int n, int r) // Membuat fungsi untuk perhitungan Kombinasi dengan parameter nilai n dan r
    {   

        // Mendeklarasikan hasil_kombinasi, kemudian memasukkan rumus kombinasi untuk dilakukan perhitungan

        int hasil_kombinasi;
        hasil_kombinasi = (faktorial (n) / (faktorial (r) * faktorial (n-r)));
        return (hasil_kombinasi);
    }

int permutasi (int n, int r) // Membuat fungsi untuk perhitungan Permutasi dengan parameter nilai n dan r
    {      

        // Mendeklarasikan hasil_kombinasi, kemudian memasukkan rumus kombinasi untuk dilakukan perhitungan

        int hasil_permutasi;
        hasil_permutasi = (faktorial (n) / faktorial (n-r));
        return (hasil_permutasi);
    }

int main ()                  // Membuat fungsi utama dari program
    {    
        string ulangi;    // Mendeklarasikan variabel ulangi sebagai string

        // Menggunakan do...while untuk melakukan perulangan

        do
        {
            system("cls");
            cout << "PERHITUNGAN KOMBINASI & PERMUTASI" << endl;

            // Input yang akan diberikan untuk memasukkan nilai n dan r
            int n, r;
            cout << "Masukkan nilai n : "; cin >> n;
            cout << "Masukkan nilai r : "; cin >> r;

            // Input yang akan diberikan untuk memilih antara kombinasi atau permutasi
            int pilihan;
            cout << "" << endl;
            cout << "1. Kombinasi" << endl;
            cout << "2. Permutasi" << endl;
            cout << "Silahkan Pilih Nomor [1 / 2] : "; cin >> pilihan;
            cout << "" << endl;
            
            // Menggunakan percabangan switch untuk membandingkan dari variabel pilihan

            switch(pilihan)
            {

                case 1 :
                {
                    // Membuat kondisi percabangan if...else untuk menentukan kondisi dari nilai n dan r

                    if (n >= r)
                        cout << "\nHasil Kombinasi = " << kombinasi(n, r);
                    else
                        cout << "\nnilai n Harus Lebih Besar/Sama dengan nilai r" << endl;
                }
                break;
                
                case 2 :
                {
                    // Membuat kondisi percabangan if...else untuk menentukan kondisi dari nilai n dan r

                    if (n >= r)
                        cout << "\nHasil Permutasi = " << permutasi(n, r);
                    else
                        cout << "\nnilai n Harus Lebih Besar/Sama dengan nilai r" << endl;
                }
                break;

                default:
                {
                    cout << "\nSalah Memasukkan Nomor" << endl;
                }
                break;

            }
            cout << "" << endl;
            cout << "\nCONTINUE [Y/N] : "; cin >> ulangi; // Inputan konfirmasi yang diberikan untuk melanjutkan/menghentikan perulangan
        }
        while(ulangi == "y" || ulangi == "Y");
    }