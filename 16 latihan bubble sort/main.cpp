#include <iostream>

using namespace std;

void bubbleSort(int data[], int size){
    int temp;

    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if(data[j] > data[j+1]){
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
            cout << data[j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    int data[6] = {5, 2, 6, 1, 4, 3};

    for (int i = 0; i < 6; i++){
        cout << data[i] << " ";
    }
    cout << endl;

    bubbleSort(data, 6);

    for (int i = 0; i < 6; i++){
        cout << data[i] << " ";
    }

    return 0;
}
