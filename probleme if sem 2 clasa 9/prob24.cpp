#include<iostream>

using namespace std;

int main(){
    int x, y, z;
    cin >> x >> y >> z;
    if(x > 0 and y > 0 and z > 0)
        {if(y > z)
            {cout << y;}
        else
            cout << z;}
    else
        cout << "Suma este " << x + y;

    return 0;
        

}