#include <iostream>
#include <stdio.h> //standard IO
#include <string.h> //manipulating several kinds of string

using namespace std;

int main()
{
    char nama[25];
    strcpy(nama, "Universitas Dian Nuswantoro"); //strcpy(var_tujuan, string_asal);(string copy: menyalin)
    cout << "Nama : " << nama << endl;
    cout << "Banyaknya karakter adalah : " << strlen(nama) << endl; //strlen(string);(string length: jumlah karakter)

    char satu[30] = "Fakultas Ilmu Komputer ";
    char dua[30] = "Udinus";
    strcat(satu, dua); //strcat(tujuan, sumber); (string concatenate: menggabungkan)
    cout << "Hasil penggabungannya : " << satu << endl;
    cout << "Jika diubah menjadi huruf kapital semua : " << strupr(satu) << endl; //strupr(string); (string upper: huruf kapital semua)
    cout << "Jika diubah menjadi huruf kecil semua : " << strlwr(satu) << endl;;//strlwr(string); (string lower: huruf kecil semua)
    return 0;
}
