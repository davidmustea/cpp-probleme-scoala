#include<iostream>

using namespace std;

int main(){
    int nr_care_se_citeste, copie_nr_care_se_citeste;
    int div, suma_div;
    int contor_nr_3_cifre = 0;

    do{
        cin >> nr_care_se_citeste;
        copie_nr_care_se_citeste = nr_care_se_citeste;

        div = 1;
        suma_div = 0;
        while(div != copie_nr_care_se_citeste){
            if(copie_nr_care_se_citeste % div == 0){
                suma_div = suma_div + div;
            }
            div++;
        }

        if(nr_care_se_citeste > 99 and nr_care_se_citeste < 1000){
            contor_nr_3_cifre++;
        }
    }
    while(suma_div != nr_care_se_citeste);

    cout << contor_nr_3_cifre << endl;

    return 0;
}