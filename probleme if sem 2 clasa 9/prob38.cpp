#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, u, z, s, m, zm, sm, x = 0;

    cin >> n;
    
    if(n < 10){
        cout << n;
    }
    else{
        if(n < 100){
            cout << n%10 * 10 + n/10;
        }
        else{
            if(n < 1000){
                cout << n/100;
            }
            else{
                if(n < 10000){
                    cout << n % 10 * 1000 + n%100/10 * 100 + n%1000/100 + n/1000;
                }
                else{
                    if(n < 100000){
                        cout << n / 10000
                    }
                    else{
                        if(n < 1000000){
                            cout << n % 10 * 100000 + n%100/10 * 10000 + n%1000/100 * 1000 + n%100000/10000 
                        }
                    }
                }
            }
        }
    }

    return 0;
}
