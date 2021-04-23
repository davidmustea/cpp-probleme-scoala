#include<iostream>

using namespace std;

int main(){
    int x, u, z;
    cin >> x;
    u = x % 10;
    z = x / 100 % 10;
    if(u=z){
        cout << x + 1 << " " << x + 2;
    }
    else
        if (u < z){
            cout << z;
        }
        else
            cout << u;
    return 0;
}