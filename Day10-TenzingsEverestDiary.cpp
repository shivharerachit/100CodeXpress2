#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin >> T;
    string str;
    string mon;
    int date;
    while(T--){
        cin >> str;
        date = stoi(str.substr(0, 2));
        mon = str.substr(2, 5);
        if (mon == "JAN") {
            cout << date << "\n";
        } else if (mon == "FEB") {
            cout << date + 31 << "\n";
        } else if (mon == "MAR") {
            cout << date + 59 << "\n";
        } else if (mon == "APR") {
            cout << date + 90 << "\n";
        } else if (mon == "MAY") {
            cout << date + 120 << "\n";
        } else if (mon == "JUN") {
            cout << date + 151 << "\n";
        } else if (mon == "JUL") {
            cout << date + 181 << "\n";
        } else if (mon == "AUG") {
            cout << date + 212 << "\n";
        } else if (mon == "SEP") {
            cout << date + 243 << "\n";
        } else if (mon == "OCT") {
            cout << date + 273 << "\n";
        } else if (mon == "NOV") {
            cout << date + 304 << "\n";
        } else if (mon == "DEC") {
            cout << date + 334 << "\n";
        } else {
            cout << "-1\n";
        }
    }
    return 0;
}
