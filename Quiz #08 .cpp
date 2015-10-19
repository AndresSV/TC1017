#include <iostream>
#include <vector>

using namespace std;

int sumSquares_List(int x){
    int number = 0;
    int sum = 0;
    int result = 0;
    vector<int>  vector1;
    for (int i = 0; i < x; i++){
        cout << "Input first number: ";
        cin >> number;
        vector1.push_back(number);
    }
    for (int i = 0; i < x; i++){
        result = vector1[i] * vector1[i];
        sum += result;
    }
    return sum;
}

int main(){
    int size;
    cout << "Input the size: " << endl;
    cin >> size;
    cout << "Result is: " << sumSquares_List(size) << endl;
    return 0;
}
