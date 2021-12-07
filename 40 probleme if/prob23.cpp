#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a,u,z,s,m,zm,x=0;
    cin >> a;

    u = a%10;
    z = (a%100)/10;
    s = (a%1000)/100;
    m =(a%10000)/1000;
    zm = (a%100000)/10000;

    if(u>0)
        x++;

    if(z>0)
        x++;

    if(s>0)
        x++;

    if(m>0)
        x++;

    if(zm>0)
        x++;

    cout << x;
    return 0;
}
