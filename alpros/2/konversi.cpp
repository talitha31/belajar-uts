#include "iostream"
#include "stdio.h"
#include "cmath"
#include "string.h"

using namespace std;

void KonvertJam(int dett) {

    int detik, jam, menit, sisa;
    jam = dett/3600;
    sisa = dett % 3600;
    menit = sisa/60;
    detik = sisa % 60;
    cout << jam << " Jam " <<  menit << " Menit " << detik << " Detik " << endl;
}

// BMI start
float Bmi(int bb, int tb)
{
    return (float)bb / pow(tb, 2);
}

void TerlaluKurus(float beratBadan, float tinggiBadan, float bmi) {
        cout << "Tinggi badan = " << tinggiBadan << endl;
        cout << "Berat badan = " << beratBadan << endl;
        cout << "Maka BMI " << beratBadan << " / " << tinggiBadan << "^2 = ";
        printf("%.2f\n", bmi);
        cout << "Terlalu kurus" << endl;
}

void Normal(float beratBadan, float tinggiBadan, float bmi) {
        cout << "Tinggi badan = " << tinggiBadan << endl;
        cout << "Berat badan = " << beratBadan << endl;
        cout << "Maka BMI " << beratBadan << " / " << tinggiBadan << "^2 = ";
        printf("%.2f\n", bmi);
        cout << "Normal" << endl;
}

void PraObesitas(float beratBadan, float tinggiBadan, float bmi) {
        cout << "Tinggi badan = " << tinggiBadan << endl;
        cout << "Berat badan = " << beratBadan << endl;
        cout << "Maka BMI " << beratBadan << " / " << tinggiBadan << "^2 = ";
        printf("%.2f \n", bmi);
        cout << "Pra-Obesitas" << endl;
}
void ObesitasI(float beratBadan, float tinggiBadan, float bmi) {

        cout << "Tinggi badan = " << tinggiBadan << endl;
        cout << "Berat badan = " << beratBadan << endl;
        cout << "Maka BMI " << beratBadan << " / " << tinggiBadan << "^2 = " << beratBadan / pow(tinggiBadan, 2);
        printf("%.2f \n", bmi);
        cout << "Obesitas tingkat I" << endl;

}

void ObesitasII(float beratBadan, float tinggiBadan, float bmi) {
        cout << "Tinggi badan = " << tinggiBadan << endl;
        cout << "Berat badan = " << beratBadan << endl;
        cout << "Maka BMI " << beratBadan << " / " << tinggiBadan << "^2 = " << beratBadan / pow(tinggiBadan, 2);
        printf("%.2f \n", bmi);
        cout << "Obesitas tingkat II " << endl;
}
void ObesitasIII(float beratBadan, float tinggiBadan, float bmi) {
        cout << "Tinggi badan = " << tinggiBadan << endl;
        cout << "Berat badan = " << beratBadan << endl;
        cout << "Maka BMI " << beratBadan << " / " << tinggiBadan << "^2 = " << beratBadan / pow(tinggiBadan, 2);
        printf("%.2f \n", bmi);
        cout << "Obesitas tingkat III" << endl;

}


// BMI close

void DesimalToBinner(int angka) {
      int binner[8];
      int j = 0;
      for(int i = 1; i <= sizeof(binner) / sizeof(int) -1; i++) {
        if(angka % 2 == 0) {
        angka /= 2;
        binner[i] = 0;
        }
        else {
                angka /= 2;
                binner[i] = 1;
        }
      }
      for (int i = sizeof(binner) / sizeof(int) -1; i > 0; i--) {
        cout << binner[i];
      }

}

// ToInt
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


    //jam
    int det;
    cout << "Masukan detik = ";
    cin >> det;
    KonvertJam(det);
    cout << endl;

    //bmi
    int beratBadan;
    float tinggiBadan;
    int bmi;
    cout << "Masukan Berat badan (kg) = ";
    cin >> beratBadan;
    cout << "Masukan Tinggi badan (cm) = ";
    cin >> tinggiBadan;

    tinggiBadan = tinggiBadan/100;

    bmi = Bmi(beratBadan, tinggiBadan);

    if(bmi < 18.5) {
        TerlaluKurus(beratBadan, tinggiBadan, bmi);
    } else if (bmi > 18.5 && bmi < 24.9)
    {
        Normal(beratBadan,tinggiBadan, bmi);
    } else if (bmi > 25 && bmi < 29.9)
    {
        PraObesitas(beratBadan, tinggiBadan, bmi);
    } else if (bmi > 30 && bmi < 34.9)
    {
        ObesitasI(beratBadan, tinggiBadan, bmi);
    } else if (bmi > 35 && bmi < 39.9)
    {
        ObesitasII(beratBadan, tinggiBadan, bmi);

    } else if (bmi > 40)
    {
        ObesitasIII(beratBadan, tinggiBadan, bmi);

    }
    cout << endl;

    //destobin
    int bilangan;
    cout << "Masukan bilangan desimal = ";
    cin >> bilangan;
    DesimalToBinner(bilangan);
    cout << endl;



    //bin to des
    char huf[5];
    int mod, des = 0,i = 0;
    cout << "Masukan bilangan binner = ";

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

