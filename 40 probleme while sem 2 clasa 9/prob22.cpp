#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n, i = 0, a, k = 0, ultima_cifra, prima_cifra, copieA;

    cin >> n;

    while(i != n){
        cin >> a;
        copieA = a;

        ultima_cifra = a % 10;

        while(copieA >= 10){
            copieA = copieA / 10;
        }

        if(ultima_cifra == copieA){
            k++;
        }        

        i++;
    }

    cout << k << endl;


    return 0;
}