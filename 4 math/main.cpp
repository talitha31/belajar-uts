#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int x, y;
    float z;

    cout << "=== Menghitung x pangkat y ===" << endl;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << x << " dipangkatkan dengan " << y << " adalah " << pow(x, y) << endl; //pow(bilangan, pangkat); (power: pangkat)

    cout << "\n=== Menghitung akar suatu bilangan z ===" << endl;
    cout << "z = "; cin >> z;
    cout << "Akar dari " << z << " adalah " << sqrt(z);

    //sqrt(bilangan); (square root: akar kuadrat)

    return 0;
}
