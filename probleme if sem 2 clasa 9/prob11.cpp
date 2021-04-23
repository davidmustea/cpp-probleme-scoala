#include<iostream>

using namespace std;

int main() {
    int a, b, n;
    float x, y;
    cin >> n;
    if (n==0){
        cin >> a >> b;
        cout << a + b;
    }
    if (n != 0){
        cin >> x >>y;
        cout << x * y;
    }
    return 0;
}