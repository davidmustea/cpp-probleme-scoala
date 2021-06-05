#include<iostream>

using namespace std;

int main(){
    int a, b, i;

    cin >> a;
    cin >> b;

    i = b;

    while(i != a - 1){

        if(i % 2 == 0){
            cout << i << endl;
        }

        i--;
    }



    return 0;
}