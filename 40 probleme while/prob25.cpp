#include<iostream>

using namespace std;

int main(){

    int n, i = 1, k = 0;

    cin >> n;

    while(i != n){

        if(n % i == 0){
            k++;
        }

        i++;
    }

    if(k == 1){
        cout << "Numarul este prim";
    }
    else{
        cout << "Numarul nu este prim";
    }



    return 0;
}