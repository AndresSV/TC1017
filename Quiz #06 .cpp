#include <iostream>
#include <cmath>

using namespace std;

long superpower(long a, long b){
  long superpower = 0;
  superpower = pow(a,b);
  return superpower;
}

void stars(int iStars){
  for (int i = 1 ; i <= iStars; i++){
    cout << "*";
  }
  cout << endl;
}

int main(){
  cout << superpower(3,4) << endl;
  stars(5);
  return 0;
}
