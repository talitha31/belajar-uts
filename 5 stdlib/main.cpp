#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int jumlah(int a, int b);
int a, b, c;
main()
{
    cout << "Masukkan a: "; cin >> a;
    cout << "Masukkan b: "; cin >> b;

    c = jumlah(a, b);
    cout << "Hasil penjumlahan = " << c << endl;
}
int jumlah(int x, int y)
{
    return(x+y);
}
