#include<iostream>

using namespace std;

int main(){
    int n, p, r, i = 0, k = 0, a;

    cin >> n;
    cin >> p;
    cin >> r;

    while(i != n){
        cin >> a;

        if(a % p == r){
            k++;
        }

        i++;
    }

    cout << k << endl;

    return 0;
}