#include<iostream>

using namespace std;

int main(){
    int n, i = 0, uc, suma = 0;

    cin >> n;

    while(n != 0){
        uc = n % 10;
        suma = suma + uc;
        n = n / 10;
    }

    cout << suma << endl;

    return 0;
}