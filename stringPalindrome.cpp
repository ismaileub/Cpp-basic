#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(const string& str) {
    int n = str.length();
    for (int i = 0; i < n / 2; ++i) {
        if (str[i] != str[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (isPalindrome(str)) {
        cout << "The string is equal to its reverse." << endl;
    } else {
        cout << "The string is not equal to its reverse." << endl;
    }

    return 0;
}

