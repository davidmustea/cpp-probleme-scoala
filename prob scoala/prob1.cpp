#include<iostream>

using namespace std;

int main(){
    int a, b, c, d, e;
    int x1 = 1, x2 = 1, x3 = 1, x4 = 1, x5 = 1, x;

    cin >> a >> b >> c >> d >> e;

    if(a % 10 == 3 or a % 10 == 6){
        x1 = a;
    }
    if(b % 10 == 3 or b % 10 == 6){
        x2 = b;
    }
    if(c % 10 == 3 or c % 10 == 6){
        x3 = c;
    }
    if(d % 10 == 3 or d % 10 == 6){
        x4 = d;
    }
    if(e % 10 == 3 or e % 10 == 6){
        x5 = e;
    }

    x = x1 * x2 * x3 * x4 * x5;

    if(x == 1){
        cout << "Nu exista";
    }

    else{
        cout << x;
    }

    return 0;
}