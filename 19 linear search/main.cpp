#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {2, 5, 1, 5, 3};
    int cari;

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    cout << "\nInputkan nilai yang di cari = "; cin >> cari;

    for(int i = 0; i < 5; i++){
        if(arr[i] == cari){
            cout << "Nilai dari " << cari << " ada di index ke " << i << endl;
        } else {
            cout << "Nilai tidak ditemukan" << endl;
        }
    }

    return 0;
}
