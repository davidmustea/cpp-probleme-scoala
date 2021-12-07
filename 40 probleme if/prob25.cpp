#include<iostream>

using namespace std;

int main()
{
    char c;
    cin << c;

    if(c >= 'A' and c <= 'Z')
        cout << "Litera mare";
    else
        if(c >= 'a' and c <= 'z')
            cout << "Litera mica";
        else
            cout << "Alt caracter";








    return 0;
}
