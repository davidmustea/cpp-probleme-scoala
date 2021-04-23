#include<iostream>

using namespace std;

int main(){
    int n, m;
    int u1, z1, s1, u2, z2, s2, x=0;

    u1 = n %10;
    z1 = n %100/10;
    s1 = n %1000/100;
    u2 = m %10;
    z2 = m %100/10;
    s2 = m %1000/100;

    if((u2 + z2 + s2) % u1 == 0){
        x++;
    }
    if((u2 + z2 + s2) % z1 == 0){
        x++;
    }
    if((u2 + z2 + s2) % s1 == 0){
        x++;
    }
    
    cout << x << endl;
    
    return 0;
}