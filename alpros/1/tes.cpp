#include "iostream"
#include "stdio.h"
#include "string.h"
#include "math.h"

using namespace std;

int ToInteger(char huruf[]) {
int angka,j=1, tes=0;
for(int i=strlen(huruf)-1;i>=0;i--) {
    angka = huruf[i];
    angka = angka - 48;
    tes = tes + (angka * j);
    j = j * 10;

}
return tes;
}

int main() {
    char huf[5];
    int mod, des = 0,i = 0;
    cin >> huf;

    long int biner;
    biner = ToInteger(huf);

    while(biner != 0) {
        mod = biner % 10;
        biner = biner / 10;
        des = des + mod * pow(2,i);
        i++;
    }
     cout << des;


    return 0;
}

