#include<iostream>

using namespace std;

int main(){
    int n, a, i = 0, k_pare = 0, k_impare = 0;
    float raportul;

    cin >> n;

    while(i != n){
        cin >> a;

        if(a % 2 == 0){
            k_pare++;
        }

        if(a % 2 == 1){
            k_impare++;
        }

        i++;
    }

    raportul = float(k_pare / k_impare);

    cout << raportul << endl;

    return 0;
}