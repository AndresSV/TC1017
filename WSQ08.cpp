#include <iostream>

using namespace std;

int sum(int x, int y){
  int z;
  z = x + y;
  return z;
}

int diference(int x, int y){
  int z;
  z = x-y;
  return z;
}

int product(int x, int y){
  int z;
  z = x*y;
  return z;
}

int division(int x, int y){
  int z;
  z = x/y;
  return z;
}

float remainder(int x, int y){
  int z;
  z = x%y;
  return z;
}

int main(){
  cout << "Sum: "
  cout << "Diference: " << sum(1,2) << endl;
  cout << "Product: " << diference(1,2) << endl;
  cout << "Division: " << product(1,2) << endl;
  cout << "Remainde: " << remainder(1,2) << endl;
  return 0;
}
