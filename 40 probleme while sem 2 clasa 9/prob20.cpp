#include<iostream>

using namespace std;

int main(){
    int n, k, uc, k_rang;

    k_rang = 0;

    cin >> n;
    cin >> k;

    while(n != 0){
        uc = n % 10;
        
        if(k == k_rang){
            cout << uc;
        }

        n = n / 10;
        k_rang++;
    }

    if(k != k_rang){
        cout << "Nu exista" << endl;
    }

    return 0;
}