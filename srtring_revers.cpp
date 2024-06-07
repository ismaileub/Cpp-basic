#include <iostream>
#include <string>

using namespace std;

string reverseString( string str) {
    string reversedStr = str;
    int n = reversedStr.length();


    for (int i = 0; i < n / 2; ++i) {
        swap(reversedStr[i], reversedStr[n - i - 1]);
    }

    return reversedStr;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string reversedStr = reverseString(str);

    cout << "Original string: " << str << endl;
    cout << "Reversed string: " << reversedStr << endl;

    return 0;
}

