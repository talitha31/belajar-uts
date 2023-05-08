#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    int luas;
    header box;

    box.setPanjang(20);
    box.setLebar(10);
    luas = box.getLuas();

    cout << "Luas : " << luas;
    return 0;
}
