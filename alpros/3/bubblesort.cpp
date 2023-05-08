#include <iostream>
#include <cstdlib>

using namespace std;

/*
Fungsi memasukan nilai array
*/


int *Input(int arre[], int jum_dat) 
{
for(int i = 0; i < jum_dat; i++)
{
    cout << "Masukan data ke-" << i+1 << " = ";
    cin >> arre[i];
}
return arre;
}

/*
Fungsi menampilkan array inputan
*/

void tampil(int arre[], int jum_dat) 
{
	cout << "Array sebelum berurutan : ";
	for(int i = 0; i < jum_dat; i++)
	{
		cout << "[" << arre[i] << "]" << " " ;
	}
}

/*
Fungsi menampilkan sebelum sorting
*/
void tampilSebelum(int arre[], int jum_dat) 
{
	for(int i = 0; i < jum_dat; i++)
	{
		cout << "[" << arre[i] << "]" << " ";
	}
	cout << endl;
}

/*
Fungsi Hasil sorting :D
*/

void hasilBubble(int arre[], int jum_dat) 
{
	cout << "Data setelah urut : ";
	for(int i = 0; i < jum_dat; i++) 
	{
		cout << "[" << arre[i] << "]" << " ";
	}
}

/*
Pemprosesan Sorting dan import fungsi tampilSebelum()
untuk melihat proses sorting
*/

int *returnBubble(int arre[], int jum_dat)
{
	cout << "Memulai proses bubble sorting " << endl;
	tampilSebelum(arre, jum_dat);
	bool swapp = false;
    int tampung;
    
    while(!swapp)
	{
    swapp = true;
    for(int i=1; i<jum_dat;i++)
    {
        if(arre[i-1]>arre[i])
    {
        swapp = false;
        tampung = arre[i];
        arre[i] = arre[i-1];
        arre[i-1] = tampung;
    }
    }
    tampilSebelum(arre, jum_dat);
	}
	return arre;
}


int main ()
{
	
int jum_dat;
cout << "Masukan length array = ";
cin >> jum_dat;

// deklar malloc
int *arre = (int*)malloc(jum_dat * sizeof(int));

// input array
arre = Input(arre, jum_dat);
cout << endl;

//tampil array
tampil(arre, jum_dat);
cout << endl;

//proses sorting
arre = returnBubble(arre, jum_dat);
cout << endl;

//tampil hasil sort
hasilBubble(arre, jum_dat);
cout << "\n";

    return 0;
}
