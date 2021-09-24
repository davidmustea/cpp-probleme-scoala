#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int nr_care_se_citeste, sqrt_nr_care_se_citeste, copie_nr_care_se_citeste, contor_nr_cu_prima_cifra_para = 0;

    do{
        cin >> nr_care_se_citeste;
        copie_nr_care_se_citeste = nr_care_se_citeste;

        while(copie_nr_care_se_citeste >= 10){
            copie_nr_care_se_citeste = copie_nr_care_se_citeste / 10;
        }
        
        if(copie_nr_care_se_citeste % 2 == 0){
            contor_nr_cu_prima_cifra_para++;
        }

        sqrt_nr_care_se_citeste = sqrt(nr_care_se_citeste);
    }
    while(sqrt_nr_care_se_citeste * sqrt_nr_care_se_citeste != nr_care_se_citeste);

    cout << contor_nr_cu_prima_cifra_para << endl;

    return 0;
}