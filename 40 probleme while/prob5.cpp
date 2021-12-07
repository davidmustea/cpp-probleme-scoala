#include<iostream>

using namespace std;

//nu merge, nu da rezultat cu virgula

int main(){
    int n, i = 1;
    float E = 0;

    cin >> n;

    while(i != n){
        E = E + float(1 / i * i);

        i++;
    }

    E++;

    cout << E << endl;

    return 0;
}