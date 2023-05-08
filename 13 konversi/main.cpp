#include <iostream>

using namespace std;

void konversi(int sec){
    int jam, menit, detik;

    jam = sec / (60 * 60);
    sec = sec - ((60 * 60) * jam);
    menit = sec / 60;
    sec = sec - (60 * menit);

    cout << "maka waktunya adalah : " << endl;
    cout << "Jam : " << jam << "\nMenit : " << menit << "\nDetik : " << sec;
}

int main()
{
    int sec;

    cout << "Masukkan jumlah detik yang mau dihitung : "; cin >> sec;

    konversi(sec);

    return 0;
}
