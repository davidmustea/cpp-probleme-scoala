#include<iostream>

using namespace std;

int main(){
    int n, i = 0, suma = 0;

    cin >> n;

    while(i != n + 1){
        suma = suma + i;
        i++;
    } 

    cout << suma << endl;

    return 0;
}