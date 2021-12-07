#include <iostream>

using namespace std;

int main()
{
    int n, i;
    
    cin >> n;
    
    if(n % 2 == 0){
        for(i = n; i <= n and i >= 0; i--){
            if(i % 2 == 0){
                cout << i << endl;
        }
    }
    }
    else{
        for(i = n + 1; i <= n + 1 and i >= 0; i--){
            if(i % 2 == 0){
                cout << i << endl;
        }
    }
    }
    
}
