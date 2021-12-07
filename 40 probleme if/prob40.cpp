#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int a, b;

    cin >> a >> b;

    if(a % b == 0 or b % a == 0){
        cout << (a + b)/2.0;
    }
    else{
        cout << sqrt(a*b);
    }
    return 0;
}