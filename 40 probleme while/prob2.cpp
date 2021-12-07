#include<iostream>

using namespace std;

int main(){
    int n, i = 1, produsul = 1;

    cin >> n;

    while(i != n + 1){
        produsul = produsul * i;
        i++;
    } 

    cout << produsul << endl;

    return 0;
}