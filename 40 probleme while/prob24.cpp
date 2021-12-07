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
    

    cout << k << endl;



    return 0;
}