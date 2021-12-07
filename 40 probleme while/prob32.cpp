#include<iostream>

using namespace std;

int main(){

    int n, i, copieI, uc, sumaCifre = 0;

    cin >> n;

    i = n;

    while(i != 0){
        copieI = i;

        while(copieI != 0){
            uc = copieI % 10;
            sumaCifre = sumaCifre + uc;
            copieI = copieI / 10;
        }

        if(sumaCifre % 2 == 1){
            cout << i << endl;
        }

        sumaCifre = 0;
        i--;
    }



    return 0;
}