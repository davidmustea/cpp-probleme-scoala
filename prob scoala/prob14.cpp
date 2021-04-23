#include<iostream>

using namespace std;

int main(){
    int a, u, z, s;
    cin >> a;
    u = a%10;
    z = (a%100)/10;
    s = a/100;

    if(u > z){
        cout << u << " " << u + z << endl;
    }
    else
        cout << z << " " << u + z << endl;


}