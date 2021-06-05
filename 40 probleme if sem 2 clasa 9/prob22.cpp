#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c, u1, u2, u3, z1, z2, z3, s1, s2, s3, suma1, suma2, suma3,Max;

    cin >> a >> b >> c;
    
    u1 = a % 10;
    u2 = b % 10;
    u3 = c % 10;

    z1 =(a%100)/10;
    z2 = (b%100)/10;
    z3 = (c%100)/10;

    s1 = a/100;
    s2 = b/100;
    s3 = c/100;

    suma1 = u1 + z1 + z1;
    suma2 = u2 + z2 + s2;
    suma3 = u3 + z3 + s3;

    Max = suma1;

    if(suma2 > Max)
        Max = suma2;

    if(suma3 > Max)
        Max = suma3;

    cout << Max;

    return 0;
}
