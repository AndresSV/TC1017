#include <iostream>
#include <string>
#include <fstream>
using namespace std;

float calculateE(float decimal){
  float e = 1;
  float factorial = 1;
  float inverse = 1;
  if (decimal == 0){
    e = 1;
  }
  else if(decimal < 9){
    for(int i = 1; i <= decimal; i++){
      factorial = factorial * i;
      e += 1/factorial;
    }
  }
  else{
    e = 2.71828;
  }
  return e;
}

int checkBanana(string filename){

  string iLine;
  double amountBananas;
  int counter=0;

  ifstream myfile();

  myfile.is_open();

  while(getline(myfile,iLine)){
    string banana = "banana";
    transform(iLine.begin(), iLine.end(), iLine.begin(), :: tolower);
    if(iLine.find(banana)!=string::npos){
      amountBananas++;
    }

  }

  return amountBananas;

}


int main(){
  float e = 8;
  cout << calculateE(e)<< endl;
  checkBanana("Bananas.txt");
  return 0;
}
