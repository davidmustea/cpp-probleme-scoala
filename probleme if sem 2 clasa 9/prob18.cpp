#include<iostream>

using namespace std;

int main(){
    int x,u,z;
    cin >> x;
    u = x%10;
    z = x/10;
    if(x%2 == 1)
        cout << u + z;
    else
        cout << "Numar par";
    
    return 0;
}