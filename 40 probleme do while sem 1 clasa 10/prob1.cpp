#include<iostream>

using namespace std;

int main(){
    int nr_care_se_citeste, contor_nr = 0, suma_nr = 0;

    do{
        cin >> nr_care_se_citeste;
        suma_nr = suma_nr + nr_care_se_citeste;
        contor_nr++;
    }
    while(nr_care_se_citeste != 0);

    cout << suma_nr / contor_nr;

    return 0;
}