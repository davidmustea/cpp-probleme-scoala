#include<iostream>

using namespace std;

int main(){
    int nr_care_se_citeste, copie_nr_care_se_citeste;
    int Max;
    int ultima_cifra, ultima_cifra_caz_2;
    int contor_nr_cu_1 = 0;

    do{
        cin >> nr_care_se_citeste;
        copie_nr_care_se_citeste = nr_care_se_citeste;

        Max = 1;
        while(copie_nr_care_se_citeste != 0){
            ultima_cifra = copie_nr_care_se_citeste % 10;
            if(ultima_cifra > Max){
                Max = ultima_cifra;
            }
            copie_nr_care_se_citeste = copie_nr_care_se_citeste / 10;
        }

        while(nr_care_se_citeste != 0){
            ultima_cifra_caz_2 = nr_care_se_citeste % 10;
            if(ultima_cifra_caz_2 == 1){
                contor_nr_cu_1++;
                break;
            }
            nr_care_se_citeste = nr_care_se_citeste / 10;
        }
    }
    while(Max != 6);

    cout << contor_nr_cu_1 << endl;

    return 0;
}