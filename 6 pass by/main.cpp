#include <iostream>
#include <cstdio>

using namespace std;

/*
void foo(int a,
         int b = 1,
         int c = 2);

void foo(int a, int b, int c)
{
    cout << a << " " << b << " " << c << endl;
}

int main()
{
    foo(0);
    foo(0, 10);
    foo(0, 10, 100);

    return 0;
}

void foo(int n)
{
    n++;
}
int main()
{
    cout << "=== PASS BY VALUE ===" << endl; //sebuah copy dari parameter dibuat

    int x = 2;
    foo(x);
    cout << x;

    return 0;
}
*/

void foo(int &n)
{
    n++;
}

int main()
{
    cout << "=== PASS BY REFERENCE ===" << endl; //parameter itu sendiri yang diteruskan dan gunakan operator referensi “&”

    int x = 2;
    foo(x);
    cout << x;

    return 0;
}
