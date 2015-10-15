#include <iostream>
using namespace std;

long fibonacci(long n){

  long fibonacci;
  long fibonacciPasado = 0;
  long fibonacciPresente = 1;

  if(n <= 1){
    fibonacci = n;
  }

  else{
    for(int i = 0; i <=(n-2); i++){
      fibonacci = fibonacciPasado + fibonacciPresente;
      fibonacciPasado = fibonacciPresente;
      fibonacciPresente = fibonacci;
    }
  }
  return fibonacci;
}

int main(){
  cout << fibonacci(0) << endl;
  cout << fibonacci(5) << endl;
  cout << fibonacci(8) << endl;
  return 0;
}
