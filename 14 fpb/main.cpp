#include <iostream>

using namespace std;

void hitung_fpb(int a, int b){
    int s = 0;

    while (b != 0){
        s = a % b;
        a = b;
        b = s;
    }

    cout << "Hasilnya adalah : " << a;
}

int main()
{
    int a, b;

    cout << "Masukkan a : "; cin >> a;
    cout << "Masukkan b : "; cin >> b;

    hitung_fpb(a, b);

    return 0;
}
