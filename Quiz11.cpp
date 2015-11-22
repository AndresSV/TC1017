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

void checkBanana(string filename){

string bananas;
float amountBananas;
int counter=0;

ifstream myfile(filename.c_str());

myfile.is_open();

while(getline(myfile,bananas)){
  //bananas finder;
}

cout<<"The total amount of bananas is: " << amountBananas << endl;

}


int main(){
  float e = 8;
  cout << calculateE(e)<< endl;
  checkBanana("Bananas.txt");
  return 0;
}
