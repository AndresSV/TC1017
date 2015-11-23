#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

float standardDeviation(vector<float> number){
  float total = 0;
  float deviation = 0;

  for (int i = 0; i <= number.size(); i++){
    total += number[i];
  }

  cout << "The total is: " << total << "." << endl;
  total = total/number.size();
  cout << "The average is: " << total << "." << endl;

  for(int i = 0; i < number.size(); i++){
    deviation += (number[i]-total) * (number[i]-total);
  }

  deviation = deviation/number.size();
  deviation = sqrt(deviation);

  cout << "The standard deviation is: " << deviation << "." << endl;

  return 0;
}

int main(){

  while (answer == "Y" || answer == "y"){

    cout << "Input number: ";
    cin >> number;
    list.push_back(number);
    cout << "To continue press 'Y'/'y', to exit press anything. " << endl;
    cin >> answer;

  }

  standardDeviation(list);

  return 0;

}
