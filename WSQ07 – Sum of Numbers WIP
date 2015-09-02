#include <iostream>
using namespace std;

int main(){

  int iLowerBound = 0;
  int iUpperBound = 0;
  int oSumInclusive = 0;

  cout << "Enter the lower bound: ";
  cin >> iLowerBound;
  cout << endl;

  cout << "Enter the upper bound: ";
  cin >> iUpperBound;
  cout << endl;

  if(iLowerBound > iUpperBound){
    int x = 0;
    int y = 0;
    x = iLowerBound;
    y = iUpperBound;
    iLowerBound = y;
    iUpperBound = x;
  }

  cout << 0 << "," ;
  for(int i = iLowerBound; i <= iUpperBound; i++){
    cout << i << "," ;
    oSumInclusive += i;
  }

  cout << endl;

  cout << "Sum is: " << oSumInclusive;

  cout << endl;

  return 0;

}
