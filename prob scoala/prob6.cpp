#include<iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a < b && b < c)
        cout << "Da";
    else
        cout << "Nu";
    
    return 0;
}