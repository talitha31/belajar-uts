#include <iostream>

using namespace std;

//reporter
int kuadrat(int x){
    int y;
    y = x * x;
    return y;
}

//worker
void tampilkan(int input){
    cout << "menampilkan dengan void : "; cout << input << endl;
}

int main()
{
    int input, hasil, a, b;
    cout << "nilai kuadrat dari : "; cin >> input;

    hasil = kuadrat(input);
    tampilkan(hasil);

    return 0;
}
