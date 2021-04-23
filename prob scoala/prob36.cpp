#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a,b,c,d,e,x,c1,y,c2;
    float ma1,ma2;
    cin>>a>>b>>c>>d>>e;
    x=0;
    y=0;
    c1=0;
    c2=0;
    if (a%2==0)
    {
    x=x+a;
    c1++;
    }
    else
    {
    y=y+a;
    c2++;
    }
    if (b%2==0)
    {
    x=x+b;
    c1++;
    }
    else
    {
    y=y+b;
    c2++;
    }
    if (c%2==0)
    {
    x=x+c;
    c1++;
    }
    else
    {
    y=y+c;
    c2++;
    }
    if (d%2==0)
    {
    x=x+d;
    c1++;
    }
    else
    {
    y=y+d;
    c2++;
    }
    if (e%2==0)
    {
    x=x+e;
    c1++;
    }
    else
    {
    y=y+e;
    c2++;
    }
    if(c1==0)
    cout<<"Nu exista numere pare";
    else
    {
    ma1=x/c1;
    cout<<"Media aritmetica a numerelor pare="<<ma1<<endl;
    }
    if(c2==0)
    cout<<"Nu exista numere impare";
    else
    return 0;
}
