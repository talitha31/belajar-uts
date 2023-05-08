#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {4, 6, 7, 5, 9};
    int temp;

    //cetak nilai array
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";

    //bubble sort
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            cout << arr[j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    //cetak nilai array hasil
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
