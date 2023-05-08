#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    cout << "=== Penjumlahan.py ===" << endl;
    int x[5] = {12, 34, 23, 1, 3};
    int s = 0;

    for(int i = 0; i < sizeof(x)/sizeof(x[0]); i++){
        s += x[i];
    }
    cout << s;

    return 0;
}
