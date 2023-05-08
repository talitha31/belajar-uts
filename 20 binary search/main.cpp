#include <iostream>

using namespace std;

void cetakArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

void binarySearch(int arr[], int size, int cari){
    int temp = 0;
    int kiri = 0, tengah = 0, kanan = size - 1;

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "\nNilai array setelah sorting " << endl;
    cetakArray(arr, size);
    cout << endl;

    while(kiri <= kanan){
        tengah = (kiri + kanan)/2;
        if(arr[tengah] == cari){
            cout << "\nData ditemukan";
            break;
        } else if(arr[tengah] < cari){
            kiri = tengah + 1;
        } else{
            kanan = tengah - 1;
            cout << "\nData tidak ditemukan";
        }
    }
}

int main()
{
    /*
    //ada nilai array
    int arr[5] = {2, 5, 1, 5, 3};
    int temp = 0, cari;
    int kiri = 0, tengah = 0, kanan = 4;

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    cout << "\nInputkan nilai yang di cari = "; cin >> cari;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Nilai array setelah sorting " << endl;

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    while(kiri <= kanan){
        tengah = (kiri + kanan)/2;
        if(arr[tengah] == cari){
            cout << "Data ditemukan";
            break;
        } else if(arr[tengah] < cari){
            kiri = tengah + 1;
        } else{
            kanan = tengah - 1;
            cout << "Data tidak ditemukan";
        }
    }
    */

    int arr[5], cari;

    cout << "Masukkan 5 angka : " << endl;
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }

    cout << "\nNilai 5 angka : " << endl;
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    cout << "\n\nInputkan nilai yang di cari = "; cin >> cari;
    binarySearch(arr, 5, cari);

    return 0;
}
