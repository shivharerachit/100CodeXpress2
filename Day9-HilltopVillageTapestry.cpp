#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string &s) {
    int len = s.length();
    for (int i = 0; i < len / 2; ++i) {
        if (s[i] != s[len - i - 1]) {
            return false;
        }
    }
    return true;
}

string makeNonPalindrome(string s) {
    int len = s.length();
    for (int i = 0; i < len / 2; ++i) {
        if (s[i] != 'a') {
            s[i] = 'a';
            if (!isPalindrome(s)) {
                return s;
            }
            s[i] = s[len - i - 1]; 
        }
    }
    s[len - 1] = 'b';
    if (isPalindrome(s)) {
        return "-1";
    }
    return s;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string S;
        cin >> S;
        if (S.length() == 1) {
            cout << "-1\n";
        } else {
            cout << makeNonPalindrome(S) << "\n";
        }
    }
    return 0;
}