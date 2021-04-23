#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a,b,c, Max;
    cin >> a >> b >> c;

    Max = a;
    if(b > Max)
        Max = b;
    
    if(c > Max)
        Max = c;

    cout << Max;
    
    return 0;
}
