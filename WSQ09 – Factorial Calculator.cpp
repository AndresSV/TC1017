#include <iostream>
#include <string>
using namespace std;

int main(){

string iAgain = "Y";

while(iAgain == "Y" || iAgain == "y"){

double oAnswer = 1;
double iNumber = 0;

cout << "Input the number you want to know the factorial: " << endl;
cin >> iNumber;

if(iNumber == 0){
oAnswer = 1;
}
else{
for (int i = 1; i <= iNumber; i++){
oAnswer = oAnswer * i;
}

}
cout << "The factorial of " << iNumber << " is: " << oAnswer;

cout << "Do you want to start again. Press 'Y' to start again. Else to exit" << endl;
cin >> iAgain;

}

return 0;

}
