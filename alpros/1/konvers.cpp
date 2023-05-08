#include <iostream>
#include <math.h>

using namespace std;

//jam
void KonvertJam(int dett) {

    int detik, jam, menit, sisa;
    jam = dett/3600;
    sisa = dett % 3600;
    menit = sisa/60;
    detik = sisa % 60;
    cout << jam << " Jam " <<  menit << " Menit " << detik << " Detik " << endl;

}

// BMI
int BMI(float tb, float bb) {
    return (float)tb/ pow(bb,2);
}

void terlaluKurus(float tinggiBadan, float beratBadan, float bmi) {

}


int main () {
    //JAM
    int detik;
    cin >> detik;
    KonvertJam(detik);

    //BMI
    int tinggiBadan, bmi;
    float beratBadan;

    cin >> tinggiBadan;
    cin >> beratBadan;

    bmi = BMI(tinggiBadan, tinggiBadan);
    if(bmi < 29.30) {
        cout << "Tinggi Badan = " << tinggiBadan << " cm." << endl;
        cout << "Tinggi Badan = " << beratBadan << " kg." << endl;
        cout << "Jadi, BMI " << tinggiBadan << "/"<< beratBadan << "^2 = " << tinggiBadan/pow(beratBadan,2) << endl;
    }

return 0;
}
