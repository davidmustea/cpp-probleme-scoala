#include<iostream>

using namespace std;

int main(){
    int n, nr_div_3 = 0, suma_pare = 0, nr_0 = 0, uc;

    cin >> n;

    while(n != 0){
        uc = n % 10;

        if(uc % 3 == 0 && uc != 0){
            nr_div_3++;
        }

        if(uc % 2 == 0){
            suma_pare = suma_pare + uc;
        }

        if(uc == 0){
            nr_0++;
        }


        n = n / 10;
    }

    cout << nr_div_3 << endl;
    cout << suma_pare << endl;
    cout << nr_0 << endl;

    return 0;
}