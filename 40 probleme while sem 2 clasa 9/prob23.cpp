#include<iostream>

using namespace std;

int main(){
    int n, a, i = 0, Max, Min;

    cin >> n;

    Max = -999999999;
    Min = 999999999;

    while(i != n){
        cin >> a;

        if(a > Max){
            Max = a;
        }

        if(a < Min){
            Min = a;
        }


        i++;
    }

    cout << Max << endl;
    cout << Min << endl;

    return 0;
}