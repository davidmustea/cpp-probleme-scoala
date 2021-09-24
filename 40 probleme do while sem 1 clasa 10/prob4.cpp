#include<iostream>

using namespace std;

int main(){
    int nr_care_se_citeste, contor_nr_2_cifre = 0, div, contor_div, copie_nr_care_se_citeste;

    do{
        cin >> nr_care_se_citeste;
        copie_nr_care_se_citeste = nr_care_se_citeste;

        div = 1;
        contor_div = 0;
        while(div != copie_nr_care_se_citeste){
            if(copie_nr_care_se_citeste % div == 0){
                contor_div++;
            }
            div++;
        }

        if(nr_care_se_citeste >= 10 and nr_care_se_citeste <= 99){
            contor_nr_2_cifre++;
        }

    }
    while(contor_div != 1);

    cout << contor_nr_2_cifre << endl;
    return 0;
}