#include<iostream>

using namespace std;

int main(){
    int nr_care_se_citeste, copie_nr_care_se_citeste, ultima_cifra, ultima_cifra_caz_2;
    int nr_cu_cifra_prima = 0;
    int contor_nr_pare_inversate = 0;

    do{
        cin >> nr_care_se_citeste;
        copie_nr_care_se_citeste = nr_care_se_citeste;

        while(copie_nr_care_se_citeste != 0){
            ultima_cifra = copie_nr_care_se_citeste % 10;
            if(ultima_cifra == 2 or ultima_cifra == 3 or ultima_cifra == 5 or ultima_cifra == 7){
                nr_cu_cifra_prima++;
            }
            copie_nr_care_se_citeste = copie_nr_care_se_citeste / 10;
        }

        while(nr_care_se_citeste > 10){
            ultima_cifra_caz_2 = nr_care_se_citeste % 10;
            nr_care_se_citeste = nr_care_se_citeste / 10;
        }
        if(ultima_cifra_caz_2 % 2 == 0){
            contor_nr_pare_inversate++;
        }
    }
    while(nr_cu_cifra_prima == 0);
    
    cout << contor_nr_pare_inversate << endl;

    return 0;
}