#include <iostream>

using namespace std;

int main()
{
  int n, i, copie_i, div, suma_div;
  
  cin >> n;
  
  for(i = n; i <= n; i--){
    copie_i = i;
    
    div = 1;
    suma_div = 0;
    
    while(div != copie_i){
        if(copie_i % div == 0){
            suma_div = suma_div + div;
        }    
        div++;
    }
    
    if(suma_div == i){
        cout << i << endl;
    }
  }
    
}
