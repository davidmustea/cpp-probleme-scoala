#include<iostream>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a == b + c || b == a + c || c == a + b)
        cout << a + b + c;
    else
        cout << "Nu exista";
    return 0;

}