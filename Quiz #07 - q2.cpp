#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string x){
    bool palindrome = false;
    string reverseX = "";
    long sizeX = 0;

    sizeX = x.length();

    for(long i = 0; i< sizeX; i++){
        reverseX[i] = x[sizeX - i - 1];
    }

    cout << "String is: ";
    for (long i = 0; i< sizeX; i++) {
        cout << x[i];
    }
cout << "." << endl;

    cout << "Reverse string is: ";
    for (long i = 0; i< sizeX; i++) {
        cout << reverseX[i];
    }
    cout << "." << endl;

    if (x == "") {
        palindrome = true;
    }
    else {
        for (long i = 0; i < sizeX; i++) {
            if (x[i] == reverseX[i]) {
                palindrome = true;
            }

            else{
                palindrome = false;
                break;
            }
        }
    }

    if (palindrome == true){
        cout << "'" << x << "' is a Palindrome" << endl;
    }

    else{
        cout << "'" << x << "' is not a Palindrome" << endl;
    }


    cout << endl;

    return palindrome;

}

int main(){
    string word;
    word = "PERRO";
    isPalindrome(word);
    isPalindrome("SALAS");
    isPalindrome("");
    isPalindrome(" ");
    isPalindrome("1");

    return 0;
}
