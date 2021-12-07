#include<iostream>

using namespace std;

int main(){
    int n,x=0;
    cin>>n;
    if(n/100000%2 != 0)
        x++;
    if(n%10000/1000%2 != 0)
        x++;
    if(n%1000/100%2 != 0)
        x++;
    if(n%100/10%2 !=0)
        x++;
    if(n%10%2 !=0)
        x++;
    cout << x;
    return 0;
}