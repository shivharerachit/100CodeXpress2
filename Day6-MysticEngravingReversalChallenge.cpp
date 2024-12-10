#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin >> T;
    int K;
    string S;
    char temp;
    while(T--){
        cin >> K;
        cin >> S;
        for(int i = 0 ; i < (K/2) ; i++){
            temp = S[K-i-1];
            S[K-i-1] = S[i];
            S[i] = temp;
        }
        cout << S << "\n";
    }
    return 0;
}
