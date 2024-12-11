#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>


using namespace std;


int main() {
    int T;
    cin >> T;
    cin.ignore();
    while(T--){
        bool flag = false;
        bool start = false;
        bool end = false;
        string S;
        getline(cin, S);
        for(long unsigned int i = 0 ; i < S.length() ; i++){
            if (S.empty()) break;
            if((S[i] > 64 && S[i] < 91) || (S[i] > 96 && S[i] < 123)){
                if (flag && !end) cout << "\n";
                flag = false;
                cout << S[i];
                start = true;
            }
            else{
                if(!start) continue;
                flag = true;
                if(i == S.length()-1) end = true;
            }
        }
        cout << "\n";
    }
    return 0;
}
