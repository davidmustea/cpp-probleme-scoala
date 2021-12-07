#include<iostream>

using namespace std;

int main(){
    int n, copieN, produsNenule = 1, uc;

    cin >> n;

    copieN = n;

    while(copieN != 0){
        uc = copieN % 10;

        if(uc != 0){
            produsNenule = produsNenule * uc;
        }
    
        copieN = copieN / 10;
    }

    cout << n % produsNenule << endl;
    cout << n / produsNenule << endl;

    return 0;
}