#include<iostream>

using namespace std;

int main(){
    int a, b, i, uc, copieI, k_pare = 0, k_impare = 0 ;

    cin >> a;
    cin >> b;

    i = a + 1;

    while(i != b){
        copieI = i;

        while(copieI != 0){
            uc = copieI % 10;

            if(uc % 2 == 0){
                k_pare++;
            }

            if(uc % 2 == 1){
                k_impare++;
            }

            copieI = copieI / 10;
        }

        if(k_pare == k_impare){
            cout << i << endl;
        }

        k_pare = 0;
        k_impare = 0;
        i++;
    }





    return 0;
}