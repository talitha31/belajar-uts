#include <iostream>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main()
{
    char karakter;

    cout << "Masukkan sebuah karakter : "; cin >> karakter;s

    if (isupper(karakter)) //isupper(char); (menghasilkan nilai benar jika huruf kapital)
    {
        cout << karakter << " adalah huruf besar" << endl;
        cout << "Huruf kecilnya adalah : " << static_cast<char>(tolower(karakter)); //tolower(char); (mengubah huruf kapital jadi huruf kecil)
    }
    else if (islower(karakter)) //islower(char); (menghasilkan nilai benar jika huruf kecil)
    {
        cout << karakter << " adalah huruf kecil" << endl;
        cout << "Huruf besarnya adalah : " << static_cast<char>(toupper(karakter)); //toupper(char); (mengubah huruf kecil jadi huruf kapital)
    }
    else if (isdigit(karakter)) //isdigit(char); (menghasilkan nilai benar jika digit)
    {
        cout << karakter << " adalah karakter digit" << endl;
    }
    else
    {
        cout << karakter << " bukan huruf besar, huruf kecil atau digit" << endl;
    }

    return 0;
}
