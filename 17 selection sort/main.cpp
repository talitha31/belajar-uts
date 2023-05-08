#include <iostream>

using namespace std;

void selectionSort(int arr[], int n){
    int min_idx, temp;

    for(int i = 0; i < 5; i++){
        min_idx = i;
        for (int j = i + 1; j < 5; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;

        for(int i = 0; i < 5; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    int arr[5] = {2, 5, 7, 3, 9};

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionSort(arr, 5);

    for (int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
