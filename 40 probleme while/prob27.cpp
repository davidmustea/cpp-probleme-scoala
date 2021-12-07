#include<iostream>

using namespace std;

int main(){

    int n, i = 100, m = 1, k = 0, z = 1, l;

    while(i != 1000){
        
        while(m != i){
            if(i % m == 0){
                k++;
            }
            m++;
        }

        if(k == 1){
            l = (i % 10) * 100 + (i % 100 / 10) * 10 + i / 100);

            while(z != l){
                
                if(l % z == 0){
                    cout << i;
                }

                z++;
            }
        }

        i++;
    }

    




    return 0;
}