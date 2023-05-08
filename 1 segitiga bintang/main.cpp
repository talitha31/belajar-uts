#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    cout << "=== Program Segitiga Bintang ===" << endl;
    int n, i, j;
    cout << "input n = "; cin >> n;
    for(i = 0; i < n; i++) {
        for(j = 0; j < i; j++) { //(j = i; j < n; j++) untuk segitiga terbalik
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    cout << "=== Mengatur sejumlah byte ===" << endl;
    /*
    int a[3][2]; //int membutuhkan alokasi 4 byte dengan panjang 3 x 2, memiliki aloasi sebesar 4 x 3 x 2 = 24
    memset(a, 0, 6*sizeof(int));

    cout << "Array setelah menggunakan memset: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << a[i] << endl;
    }
    cout << endl;
    */

    int a[5]; //int 4 byte, short 2 byte => 4 x 5

    cout << sizeof(a) << endl;
    memset (a, 0, sizeof(a));
    cout << a[0] << endl;
    cout << a[1] << endl;
    cout << a[2] << endl;
    cout << a[5] << endl;

    return 0;
}
