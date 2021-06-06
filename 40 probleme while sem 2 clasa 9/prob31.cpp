#include<iostream>

using namespace std;

int main(){
    int n= 10000, i = 1000;

    
    while(i != n){
        if(4 * (i / 1000) == (i % 1000 / 100)){
            cout << i << endl;
        }


        i++;
    }



    return 0;
}