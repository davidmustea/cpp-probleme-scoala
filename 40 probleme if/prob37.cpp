#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c;

    cin >> a >> b >> c;

    if(a > 0 and b > 0 and c > 0){
        if(a + b > c and a + c > b and b + c > a){
            cout << "Numerele date POT fi laturile unui triunghi";
        }
        else{
            cout << "Numerele date NU pot fi laturile unui triunghi";
        }
    }
    else{
        cout << "Numerele date NU pot fi laturile unui triunghi";
    }
    return 0;
}
