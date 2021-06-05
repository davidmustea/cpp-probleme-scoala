#include<iostream>

using namespace std;

int main(){
    int n, i = 0, a, cateNumereSunt = 0, Suma = 0;

    cin >> n;

    while(i != n){
        cin >> a;

        if(a % 3 == 0){
            Suma = Suma + a;
            cateNumereSunt++;
        }

        i++;
    }

    float rezultatul;
    rezultatul = float(Suma / cateNumereSunt);
    
    cout << rezultatul << endl;

    return 0;
}