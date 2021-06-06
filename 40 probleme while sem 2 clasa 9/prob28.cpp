#include<iostream>

using namespace std;

int main(){
    int n, i = 0, copieN, uc, invers = 0;

    cin >> n;

    copieN = n;

    while(copieN != 0){
        uc = copieN % 10;
        invers = invers * 10 + uc;
        copieN = copieN / 10;
    }

    if(invers == n){
        cout << "Numarul este palindrom";
    }
    else{
        cout << "Numarul nu este palindrom";
    }



    return 0;
}