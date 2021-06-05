#include<iostream>

using namespace std;

int main(){
    int n, suma_impare = 0, produs_pare = 1, rang = 0, raportul;

    cin >> n;

    while(n != 0){

        if(rang % 2 == 0){
            produs_pare = produs_pare * (n % 10);
        }

        if(rang % 2 == 1){
            suma_impare = suma_impare + (n % 10);
        }

        rang++;

        n = n / 10;
    }

    raportul = produs_pare / suma_impare;

    cout << raportul << endl;

    return 0;
}