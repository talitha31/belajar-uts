#include <stdio.h>

using namespace std;

int jumlah(int ang1, int ang2) {
    int has;
    has = ang1+ang2;
    return has;
}

int kurang(int ang1, int ang2) {
    int has;
    has = ang1-ang2;
    return has;
}

int kali(int ang1, int ang2) {
    int has;
    has = ang1*ang2;
    return has;
}

float bagi(int ang1, int ang2) {
    float has;
    has = (float)ang1/ang2;
    return has;
}

int angka1,angka2;

int main() {
printf("================================================\n");

printf("Masukkan angka 1 = ");
scanf("%d", &angka1);

printf("Masukkan angka 2 = ");
scanf("%d", &angka2);

printf("================================================");
printf("\nHasil penjumlahan dari %d + %d = %d\n", angka1, angka2, jumlah(angka1, angka2));
printf("Hasil pengurangan dari %d - %d = %d\n", angka1, angka2, kurang(angka1, angka2));
printf("Hasil perkalian dari %d * %d = %d\n", angka1, angka2, kali(angka1, angka2));
printf("Hasil pembagian dari %d / %d = %.2f\n", angka1, angka2, bagi(angka1, angka2));
printf("================================================");

}
