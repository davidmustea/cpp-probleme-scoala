#include<iostream>

using namespace std;

int main(){
    int nr_care_se_citeste, copie_nr_care_se_citeste;
    int div, contor_div;
    int div_prim, contor_div_prim;
    int contor_nr_prime = 0;

    do{
        cin >> nr_care_se_citeste;
        copie_nr_care_se_citeste = nr_care_se_citeste;

        div = 1;
        contor_div = 0;

        while(div != copie_nr_care_se_citeste / 2){
            if(copie_nr_care_se_citeste % div == 0){
                contor_div++;
            }
            div++;
        }

        div_prim = 1;
        contor_div_prim = 0;

        while(div_prim != nr_care_se_citeste){
            if(nr_care_se_citeste % div_prim == 0){
                contor_div_prim++;
            }
            div_prim++;
        }

        if(contor_div_prim == 1){
            contor_nr_prime++;
        }
    }
    while(contor_div != 4);

    cout << contor_nr_prime << endl;

    return 0;
}