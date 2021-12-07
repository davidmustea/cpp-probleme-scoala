#include <iostream>


using namespace std;


int main(){
    int nr_care_se_citeste, copie_nr_care_se_citeste;
    int ultima_cifra, suma_cifre;
    int ultima_cifra_nr_2, prima_cifra_nr_2;
    int contor_nr_rez = 0;


    do{
        cin >> nr_care_se_citeste;
        copie_nr_care_se_citeste = nr_care_se_citeste;


        suma_cifre = 0;
        while(copie_nr_care_se_citeste != 0){
            ultima_cifra = copie_nr_care_se_citeste % 10;
            suma_cifre = suma_cifre + ultima_cifra;
            copie_nr_care_se_citeste = copie_nr_care_se_citeste / 10;
        }


        ultima_cifra_nr_2 = nr_care_se_citeste % 10;
        while(nr_care_se_citeste >= 10){
            prima_cifra_nr_2 = nr_care_se_citeste % 10;
            nr_care_se_citeste = nr_care_se_citeste / 10;
        }


        if(ultima_cifra_nr_2 == prima_cifra_nr_2){
            contor_nr_rez++;
        }

}
while(suma_cifre % 2 == 1);

cout << contor_nr_rez << endl;

return 0;
}
