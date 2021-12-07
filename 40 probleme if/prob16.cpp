#include<iostream>

using namespace std;

int main(){
    int n, m, s;
    cin >> n;
    m = n/1000;
    s = n/ 100 % 10;
    if(m > s){
        cout << s << " " << m;
    }
    else
        cout << m << " " << s;
    
    return 0;



}