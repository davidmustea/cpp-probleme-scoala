#include<iostream>

using namespace std;

int main(){
    int nr_care_se_citeste, contor_nr_palindrom = 0, copie_nr_care_se_citeste, oglindit_nr_care_se_citeste, copie_nr_care_se_citeste_prim;
    int div, contor_div, contor_nr_prim = 0;

    do{
        cin >> nr_care_se_citeste;
        copie_nr_care_se_citeste = nr_care_se_citeste;
        copie_nr_care_se_citeste_prim = nr_care_se_citeste;

        oglindit_nr_care_se_citeste = 0;
        while(copie_nr_care_se_citeste != 0){
            oglindit_nr_care_se_citeste = oglindit_nr_care_se_citeste * 10 + copie_nr_care_se_citeste % 10;

            copie_nr_care_se_citeste = copie_nr_care_se_citeste / 10;
        }
        if(nr_care_se_citeste == oglindit_nr_care_se_citeste){
            contor_nr_palindrom++;
        }

        div = 1;
        contor_div = 0;
        while(div != copie_nr_care_se_citeste_prim){
            if(copie_nr_care_se_citeste_prim % div == 0){
                contor_div++;
            }
            div++;
        }
        if(contor_div == 1){
            contor_nr_prim++;
        }

    }
    while(contor_nr_prim == 0);

    cout << contor_nr_palindrom << endl;
    return 0;
}