#include "header.h"
#include <iostream>

using namespace std;

void header::setPanjang(int p){
    panjang = p;
}

void header::setLebar(int l){
    lebar = l;
}

int header::getLuas(){
    return panjang * lebar;
}
