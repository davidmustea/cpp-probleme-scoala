#include<iostream>

using namespace std;

int main(){
    int nr_care_se_citeste, ultima_cifra, contor_nr_cu_3 = 0, copie_nr_care_se_citeste;
    
    do{
        cin >> nr_care_se_citeste;
        copie_nr_care_se_citeste = nr_care_se_citeste;

        while(copie_nr_care_se_citeste != 0){
            ultima_cifra = copie_nr_care_se_citeste % 10;
            if(ultima_cifra == 3){
                contor_nr_cu_3++;
                break;
            }
            copie_nr_care_se_citeste = copie_nr_care_se_citeste / 10;
        }
    }

    while(nr_care_se_citeste % 2 == 0);

    cout << contor_nr_cu_3 << endl;

    return 0;
}