#include<iostream>

using namespace std;

int main(){
    int n, a, i = 0, k_pare = 0, k_impare = 0, suma_pare = 0, suma_impare = 0;
    

    cin >> n;

    while(i != n){
        cin >> a;

        if(a % 2 == 0){
            k_pare++;
            suma_pare = suma_pare + a;
        }

        if(a % 2 == 1){
            k_impare++;
            suma_impare = suma_impare + a;
        }

        i++;
    }

    cout << "Media aritmetica impare este" << " " << float(suma_impare / k_impare) << endl;

    cout << "Media aritmetica pare este" << " " << float(suma_pare / k_pare) << endl;

    return 0;
}