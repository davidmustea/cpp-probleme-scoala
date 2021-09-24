#include<iostream>

using namespace std;

int main(){
    int a, x, contor_nr_citite = 0, suma = 0;

    cin >> a;

    do{
        cin >> x;
        suma = suma + x;
        contor_nr_citite++;
    }
    while(suma <= a);

    cout << contor_nr_citite << endl;

    return 0;
}