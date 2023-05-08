#include <iostream>

using namespace std;

void insertionSort(int x[], int n){
    int temp;

    cout << "x : ";

    for(int a = 0; a < n; a++){
        cout << x[a] << " ";
    }
    cout << endl;

    //insertion sort
    for(int b = 1; b < n; b++){
        for(int c = b; c > 0; c--){
            if(x[c] < x[c - 1]){
                temp = x[c];
                x[c] = x[c - 1];
                x[c - 1] = temp;
            } else {
                break;
            }
            for(int i = 0; i < n; i++){
                cout << x[i] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    cout << endl;

    cout << "y : ";

    for(int d = 0; d < n; d++){
        cout << x[d] << " ";
    }
}

int main()
{
    int x[] = {3, 2, 6, 5, 4};
    int j = sizeof(x) / sizeof(*x);

    insertionSort(x, j);

    return 0;
}
