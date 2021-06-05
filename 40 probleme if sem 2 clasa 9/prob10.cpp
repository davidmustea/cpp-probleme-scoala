#include<iostream>

using namespace std;

int main() {
    int a, x, y;
    cin >> a >> x >> y;
    if (a%x == 0 && a%y == 0)
        cout << "Este divizibil";
    else
        cout << "Nu este divizibil";
    return 0;
}