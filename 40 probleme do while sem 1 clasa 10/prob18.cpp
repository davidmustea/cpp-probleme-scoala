#include<iostream>

using namespace std;
//nu merge la numere perfecte
int main(){
    int nr_care_se_citeste, copie_nr_care_se_citeste;
    int ultima_cifra, suma_cifre;
    int produsul_cifre;
    int div;
    int contor_nr_prime = 0, ultima_cifra_2;

    do{
        cin >> nr_care_se_citeste;
        copie_nr_care_se_citeste = nr_care_se_citeste;

        produsul_cifre = 1;
        while(copie_nr_care_se_citeste != 0){
            ultima_cifra = copie_nr_care_se_citeste % 10;
            produsul_cifre = produsul_cifre * ultima_cifra;
            copie_nr_care_se_citeste = copie_nr_care_se_citeste / 10;
            cout << "*" << produsul_cifre << endl;
        }

        div = 1;
        suma_cifre = 0;
        while(div != produsul_cifre){
            if(produsul_cifre % div == 0){
                suma_cifre = suma_cifre + div;
            }
            div++;
            cout << "**" << suma_cifre << endl;
        }

        while(nr_care_se_citeste != 0){
            ultima_cifra_2 = nr_care_se_citeste % 10;
            if(ultima_cifra_2 == 2 or ultima_cifra_2 == 3 or ultima_cifra_2 == 5 or ultima_cifra_2 == 7){
                contor_nr_prime++;
            }
            nr_care_se_citeste = nr_care_se_citeste / 10;
        }
    }
    while(suma_cifre != nr_care_se_citeste);

    cout << contor_nr_prime << endl;

    return 0;
}