#include<iostream>

using namespace std;

int main(){
    int x;
    
    cin >> x;

    if(x%2 == 0)
        cout << x + 2 << " " << x - 2;

    if(x%2 == 1)
        cout << x + 1 << " " << x - 1;

    return 0;


}