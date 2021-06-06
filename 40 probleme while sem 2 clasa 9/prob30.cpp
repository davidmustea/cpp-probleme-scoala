#include<iostream>

using namespace std;


int main(){
    int a, b, i, invers = 0, copieI, uc, k = 0;

    cin >> a;
    cin >> b;

    i = a;

    while(i != b){
        copieI = i;

        while(copieI != 0){
            uc = copieI % 10;
            invers = invers * 10 + uc;
            copieI = copieI / 10;
        }

        if(invers == i){
            cout << i << " ";
            k++;
        }

        invers = 0;
        i++;
    }

    cout << endl << k;

    return 0;
}