#include<iostream>

using namespace std;

int main(){
    int nr_care_se_citeste, copie_nr_care_se_citeste;
    int ultima_cifra, suma_cifre;
    int div, contor_div, div2, suma_div2;
    int contor_nr_perfecte = 0;

    do{
        cin >> nr_care_se_citeste;
        copie_nr_care_se_citeste = nr_care_se_citeste;

        suma_cifre = 0;
        while(copie_nr_care_se_citeste != 0){
            ultima_cifra = copie_nr_care_se_citeste % 10;
            suma_cifre = suma_cifre + ultima_cifra;
            copie_nr_care_se_citeste = copie_nr_care_se_citeste / 10;
        }

        div = 1;
        contor_div = 0;
        while(div != suma_cifre / 2){
            if(suma_cifre % div == 0){
                contor_div++;
            }
            div++;
        }

        div2 = 1;
        suma_div2 = 0;
        while(div2 != nr_care_se_citeste){
            if(nr_care_se_citeste % div2 == 0){
            suma_div2 = suma_div2 + div2;
            }
            div2++;
        }
        if(suma_div2 == nr_care_se_citeste){
            contor_nr_perfecte++;
        }
    }
    while(contor_div != 1);

    cout << contor_nr_perfecte << endl;

    return 0;
}