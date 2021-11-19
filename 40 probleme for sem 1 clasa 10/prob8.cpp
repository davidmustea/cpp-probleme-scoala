#include <iostream>

using namespace std;

int main()
{
  int n, i, contor_div = 0;
  
  cin >> n;
  
  for(i = 1; i < n; i++){
    if(n % i == 0){
        cout << i << endl;
        contor_div++;
  }
  }
  
  cout << "numarul div este " << contor_div << endl;
    
}