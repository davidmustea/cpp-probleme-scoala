#include<iostream>

using namespace std;

int main(){
    int nr_care_se_citeste, contor_nr_2_cifre = 0, copie_nr_care_se_citeste, oglindit_nr_care_se_citeste,
    contor_palindrom = 0;

    do{
        cin >> nr_care_se_citeste;
        copie_nr_care_se_citeste = nr_care_se_citeste;

        oglindit_nr_care_se_citeste = 0;
        while(copie_nr_care_se_citeste != 0){
            oglindit_nr_care_se_citeste = oglindit_nr_care_se_citeste * 10 + copie_nr_care_se_citeste % 10;

            copie_nr_care_se_citeste = copie_nr_care_se_citeste / 10;
        }

        if(nr_care_se_citeste == oglindit_nr_care_se_citeste){
            contor_palindrom++;
        }

        if(nr_care_se_citeste >= 10 and nr_care_se_citeste <= 99){
            contor_nr_2_cifre++;
        }

    }  
    while(contor_palindrom == 0);

    cout << contor_nr_2_cifre << endl;


    return 0;
}