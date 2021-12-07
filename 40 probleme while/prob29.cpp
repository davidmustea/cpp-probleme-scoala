#include<iostream>

using namespace std;

int main(){
    int n, i = 0, copieI, uc, invers = 0;

    cin >> n;

    while(i != n){
        copieI = i;

        while(copieI != 0){
            uc = copieI % 10;
            invers = invers * 10 + uc; 
            copieI = copieI / 10;
        }

        if(invers == i){
            cout << i << endl;
        }
        
        invers = 0;

        i++;
    }


    return 0;
}