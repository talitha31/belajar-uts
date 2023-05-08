
#include <iostream>

using namespace std;

int *Bubb(int a[], int n)
{
    bool swapp = false;
    int temp;
    while(!swapp) {
    swapp = true;
    for(int i=1; i<n;i++)
    {
        if(a[i-1]>a[i])
    {
        swapp = false;
        temp = a[i];
        a[i] = a[i-1];
        a[i-1] = temp;
    }
    }
}
//cout << "masuk " << endl;
return a;

}

int main () {


int a[] = {111,1000,8000,555};
int n = sizeof(a)/sizeof(a[0]);

int *x = Bubb(a,n);
int i;
for(i = 0;i < n;i++)
{
    cout << x[i] << " ";
}

return 0;
}
