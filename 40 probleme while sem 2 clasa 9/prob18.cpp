#include<iostream>

using namespace std;

int main(){
    int n, Max, Min, uc;

    cin >> n;

    Min = 999999999;
    Max = -999999999;

    while(n != 0){
        uc = n % 10;

        if(uc < Min){
            Min = uc;
        }

        if(uc > Max){
            Max = uc;
        }

        n = n / 10;
    }

    cout << Max << " " << Min;



    return 0;
}