#include<iostream>

using namespace std;

int main(){
    int nr_care_se_citeste, copie_nr_care_se_citeste;
    int Min, ultima_cifra;
    int div, contor_div, contor_nr_prime;

    do{
        cin >> nr_care_se_citeste;
        copie_nr_care_se_citeste = nr_care_se_citeste;

        Min = 9;
        while(copie_nr_care_se_citeste != 0){
            ultima_cifra = copie_nr_care_se_citeste % 10;
            if(ultima_cifra < Min){
                Min = ultima_cifra;
            }
            copie_nr_care_se_citeste = copie_nr_care_se_citeste / 10;
        }

        div = 1;
        contor_div = 0;
        while(div != nr_care_se_citeste / 2){
            if(nr_care_se_citeste % div == 0){
                contor_div++;
            }
            div++;
        }

        if(contor_div == 1){
            contor_nr_prime++;
        }
    }

    while(Min != 3);

    cout << contor_nr_prime << endl;

    return 0;
}