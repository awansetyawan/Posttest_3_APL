// Library
#include<iostream>
using namespace std;

// Pada fungsi operasi diterapkan overloading dengan jumlah parameter berbeda

// Fungsi operasi Penjumlahan dengan menggunakan 3 dan 2 parameter 
int tambah(int fungsix, int fungsiy, int fungsiz){
  return fungsix + fungsiy + fungsiz;
}

int tambah(int fungsix, int fungsiy){
  return fungsix + fungsiy;
}

// Fungsi operasi Pengurangan dengan menggunakan 3 dan 2 parameter

int kurang(int fungsix, int fungsiy, int fungsiz){
  return fungsix - fungsiy - fungsiz;
}

int kurang(int fungsix, int fungsiy){
  return fungsix - fungsiy;
}

// Fungsi operasi Perkalian dengan menggunakan 3 dan 2 parameter

int kali(int fungsix, int fungsiy, int fungsiz){
  return fungsix * fungsiy * fungsiz;
}

int kali(int fungsix, int fungsiy){
  return fungsix * fungsiy;
}

// Fungsi operasi Pembagian dengan menggunakan 3 dan 2 parameter

int bagi(int fungsix, int fungsiy, int fungsiz){
  return fungsix / fungsiy / fungsiz;
}

int bagi(int fungsix, int fungsiy){
  return fungsix / fungsiy;
}

// Fungsi operasi Modulus atau Hasil Bagi dengan menggunakan 3 dan 2 parameter

int sisa_bagi(int fungsix, int fungsiy, int fungsiz){
  return fungsix % fungsiy % fungsiz;
}

int sisa_bagi(int fungsix, int fungsiy){
  return fungsix % fungsiy;
}

// Prosedur untuk menampilkan ucapan & menu
void tampilan(){
  cout << "================================================" << endl
       << "|---------------Selamat Datang-----------------|" << endl
       << "|-----------Di Kalkulator Sederhana------------|" << endl
       << "|--------Menggunakan 2 dan 3 Variabel----------|" << endl
       << "================================================" << endl
       << "- Dibuat Oleh Alif Maulana Setyawan" << endl
       << "\n>>> ---Menu--- <<<" << endl
       << "1) Penjumlahan (+)" << endl
       << "2) Pengurangan (-)" << endl
       << "3) Perkalian   (x)" << endl
       << "4) Pembagian   (:)" << endl
       << "5) Hasil Bagi  (%)" << endl
       << "6) Exit" << endl;
}

// Fungsi utama
int main(){
  
  // Deklarasi variabel pengulangan
  char ulang;

  // Perulangan Do....While
  do{

    // Menggunakan fungsi clearscreen
    system("cls");

    // Memanggil fungsi prosedur
    tampilan();

    // Deklarasi variabel untuk input menu dan jumlah variabel
    int pilih, jumlah_variabel;

    // Inputan menu
    cout << "Masukkan Nomor Menu : "; cin >> pilih;
    switch(pilih){

        /*
        Case 1 - 5
        - Memasukkan jumlah variabel yang diinginkan.
        - Setelah jumlah variabel ditentukan maka akan disesuaikan dengan kondisi If....Else If.... Else. 
        - Yang dimana pada if dideklarasikan 2 variabel lokal (x, y) dan else if dideklarasikan 3 variabel lokal (x, y, z).
          Pada kondisi if dan else if juga akan meminta inputan untuk variabel yang telah ditentukan, inputan variabel
          tersebut akan menjadi parameter fungsi operasi yang telah dibuat, Kemudian memanggil fungsi operasi beserta 
          parameternya untuk menampilkan hasil perhitungan.
        - Dan untuk kondisi else akan memberitahukan menu tidak ada
        */

        case 1:

          system("cls");
          cout << "<<=========|Penjumlahan|============>>" << endl;
          cout << "\nIngin Berapa Variabel ??" << endl
              << "1) Dua Variabel" << endl
              << "2) Tiga Variabel" << endl
              << "Pilihan anda >> "; cin >> jumlah_variabel;

          if (jumlah_variabel == 1){
            int x, y;
            cout << "\nMasukkan Nilai x : "; cin >> x;
            cout << "Masukkan Nilai y : "; cin >> y;
            cout << "Hasilnya = " << tambah(x, y);
          }

          else if(jumlah_variabel == 2){
            int x, y, z;
            cout << "\nMasukkan Nilai x : "; cin >> x;
            cout << "Masukkan Nilai y : "; cin >> y;
            cout << "Masukkan Nilai z : "; cin >> z;
            cout << "Hasilnya = " << tambah(x, y, z);
          }

          else{
            cout << "\n>>> Menu Tidak Ada <<<";
          }
          break;
        
        case 2:

          system("cls");
          cout << "<<=========|Pengurangan|============>>" << endl;
          cout << "\nIngin Berapa Variabel ??" << endl
              << "1) Dua Variabel" << endl
              << "2) Tiga Variabel" << endl
              << "Pilihan anda >> "; cin >> jumlah_variabel;

          if (jumlah_variabel == 1){
            int x, y;
            cout << "\nMasukkan Nilai x : "; cin >> x;
            cout << "Masukkan Nilai y : "; cin >> y;
            cout << "Hasilnya = " << kurang(x, y);
          }

          else if(jumlah_variabel == 2){
            int x, y, z;
            cout << "\nMasukkan Nilai x : "; cin >> x;
            cout << "Masukkan Nilai y : "; cin >> y;
            cout << "Masukkan Nilai z : "; cin >> z;
            cout << "Hasilnya = " << kurang(x, y, z);
          }

          else{
            cout << "\n>>> Menu Tidak Ada <<<";
          }
          break;
        
        case 3:

          system("cls");
          cout << "<<==========|Perkalian|=============>>" << endl;
          cout << "\nIngin Berapa Variabel ??" << endl
              << "1) Dua Variabel" << endl
              << "2) Tiga Variabel" << endl
              << "Pilihan anda >> "; cin >> jumlah_variabel;

          if (jumlah_variabel == 1){
            int x, y;
            cout << "\nMasukkan Nilai x : "; cin >> x;
            cout << "Masukkan Nilai y : "; cin >> y;
            cout << "Hasilnya = " << kali(x, y);
          }

          else if(jumlah_variabel == 2){
            int x, y, z;
            cout << "\nMasukkan Nilai x : "; cin >> x;
            cout << "Masukkan Nilai y : "; cin >> y;
            cout << "Masukkan Nilai z : "; cin >> z;
            cout << "Hasilnya = " << kali(x, y, z);
          }

          else{
            cout << "\n>>> Menu Tidak Ada <<<";
          }
          break;
        
        case 4:

          system("cls");
          cout << "<<==========|Pembagian|=============>>" << endl;
          cout << "\nIngin Berapa Variabel ??" << endl
              << "1) Dua Variabel" << endl
              << "2) Tiga Variabel" << endl
              << "Pilihan anda >> "; cin >> jumlah_variabel;

          if (jumlah_variabel == 1){
            int x, y;
            cout << "\nMasukkan Nilai x : "; cin >> x;
            cout << "Masukkan Nilai y : "; cin >> y;
            cout << "Hasilnya = " << bagi(x, y);
          }

          else if(jumlah_variabel == 2){
            int x, y, z;
            cout << "\nMasukkan Nilai x : "; cin >> x;
            cout << "Masukkan Nilai y : "; cin >> y;
            cout << "Masukkan Nilai z : "; cin >> z;
            cout << "Hasilnya = " << bagi(x, y, z);
          }

          else{
            cout << "\n>>> Menu Tidak Ada <<<";
          }
          break;
        
        case 5:

          system("cls");
          cout << "<<===========|Modulus|==============>>" << endl;
          cout << "\nIngin Berapa Variabel ??" << endl
              << "1) Dua Variabel" << endl
              << "2) Tiga Variabel" << endl
              << "Pilihan anda >> "; cin >> jumlah_variabel;

          if (jumlah_variabel == 1){
            int x, y;
            cout << "\nMasukkan Nilai x : "; cin >> x;
            cout << "Masukkan Nilai y : "; cin >> y;
            cout << "Hasilnya = " << sisa_bagi(x, y);
          }

          else if(jumlah_variabel == 2){
            int x, y, z;
            cout << "\nMasukkan Nilai x : "; cin >> x;
            cout << "Masukkan Nilai y : "; cin >> y;
            cout << "Masukkan Nilai z : "; cin >> z;
            cout << "Hasilnya = " << sisa_bagi(x, y, z);
          }

          else{
            cout << ">>> Menu Tidak Ada <<<";
          }
          break;
        
        // Kondisi dan konfirmasi untuk keluar program
        case 6:
          cout << "\n<---- Terima Kasih ---->" << endl;
          exit(0);
        
        // Kondisi untuk memberitahukan menu tidak tersedia
        default:
          cout << "\n>>> Menu Tidak Tersedia <<<"; 
    }
    cout << endl;

    // Konfirmasi untuk mengulang
    cout << "\nIngin Mengulang (y/t) ? : "; cin >> ulang;
    cout << endl;
  }
  while(ulang != 't');
  
  // Konfirmasi keluar dari program
  cout << "<---- Terima Kasih ---->" << endl;
}
