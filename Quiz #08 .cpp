#include <iostream>
#include <vector>

using namespace std;

int sumSquares_List(vector<int> x){

    int sum = 0;
    int result = 0;
    for (int i = 0; i < x.size(); i++){
        result = x[i] * x[i];
        sum += result;
    }
    return sum;
}

int main(){
    int size = 0;
    int number = 0;
    vector<int>  vector1;
    cout << "Input the size: " << endl;
    cin >> size;
    for (int i = 0; i < size; i++){
        cout << "Input " << i + 1  <<" number: ";
        cin >> number;
        vector1.push_back(number);
    }
    cout << "Result is: " << sumSquares_List(vector1) << endl;
    return 0;
}
