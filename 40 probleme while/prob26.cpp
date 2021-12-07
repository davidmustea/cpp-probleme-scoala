#include<iostream>

using namespace std;

//nu merge

int main(){
    int n, i = 0, ii = 1, k = 0;

    cin >> n;

    while(i != n){

        while(ii != n){

            if(n % ii == 0){
                k++;
            }

            ii++;
        }

        if(k == 1){
            cout << i << endl;
        }

        k = 0;
        ii = 0;

        i++;
    }


    return 0;
}