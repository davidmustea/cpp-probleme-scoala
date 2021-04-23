#include<iostream> 

using namespace std;

int main()
{
    int x;
    cin >> x;
    if (x/10 != 0 && x/100 == 0)
        cout<<"da";
    else
        cout<<"nu";

    return 0;
}