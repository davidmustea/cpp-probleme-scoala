#include<iostream>

using namespace std;

int main(){
    int a, b, i = 1;

    cin >> a;
    cin >> b;

    while(i != b){
        a = a + b;

        i++;
    }

    cout << a << endl;

    return 0;
}