#include <iostream>
#include <cstdlib>


using namespace std;


int *SelectAcc(int arre[], int jum_dat)
{
    int tampung, min;
     for (int i = 0; i < jum_dat-1; i++)
    {
        min = i;
        for (int j = i+1; j < jum_dat; j++)
        {
          if (arre[j] < arre[min])
            min = j;
        }
        if (min!=i)
        {
        	tampung = arre[i];
        	arre[i] = arre[min];
        	arre[min] = tampung;
		}
    }

	return arre;
}


int *SelectDes(int arre[], int jum_dat)
{
    int tampung, min;
     for (int i = 0; i < jum_dat-1; i++)
    {
        min = i;
        for (int j = i+1; j < jum_dat; j++)
        {
          if (arre[j] > arre[min])
            min = j;
        }
        if (min!=i)
        {
        	tampung = arre[i];
        	arre[i] = arre[min];
        	arre[min] = tampung;
		}
    }

	return arre;
}


void pecah(int *arre, int n,  int& nGenap, int& nGanjil, int genap[], int ganjil[])
{
    for(int i; i<n; i++)
    {
        if(arre[i]%2==0)
        {
            genap[nGenap] = arre[i];
            nGenap++;
        }
        else
        {
            ganjil[nGanjil] = arre[i];
            nGanjil++;
        }
    }
}


void tampil(int arre[], int jum_dat)
{
	for(int i = 0; i < jum_dat; i++)
	{
		cout << "[" << arre[i] << "]" << " " ;
	}
}


int *gabungArr(int *genap, int *ganjil, int nGenap, int nGanjil)
{
    int n = nGanjil + nGenap;
    int GanjilC = 0;
    int GenapC = 0;
    int *arre = (int*)malloc(n * sizeof(int));
    int i = 0;
    while(i < n)
    {
        if(GanjilC < nGanjil)
        {
            arre[i] = ganjil[GanjilC];
            i++;
            GanjilC++;
        }
        if(GenapC < nGenap)
        {
            arre[i] = genap[GenapC];
            i++;
            GenapC++;
        }
    }
    return arre;
}


int main ()
{
int arre[] = {1, 7, 8, 3, 2, 5, 9, 7, 6, 2, 1};
int jum_dat = sizeof(arre)/sizeof(int);
int *arreHas = (int*)malloc(jum_dat * sizeof(int));
int genap[jum_dat];
int ganjil[jum_dat];
int nGenap = 0;
int nGanjil = 0;
int* hGenap;
int* hGanjil;

//tampil array
cout << "Array sebelum sorting : " << endl;
pecah(arre,jum_dat, nGenap, nGanjil, genap, ganjil);

tampil(genap, nGenap);
cout << endl;
tampil(ganjil, nGanjil);
hGenap = SelectDes(genap, nGenap);
hGanjil = SelectAcc(ganjil, nGanjil);

cout << "\n\nArray setelah sorting : " << endl;
tampil(genap, nGenap);
cout << "\n";
tampil(ganjil, nGanjil);
cout << "\n\n";

cout << "Array kombinasi : " << endl;
arreHas = gabungArr(genap, ganjil, nGenap, nGanjil);
tampil(arreHas, jum_dat);

  return 0;
}
