#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin >> T;
    int N;
    while(T--){
        cin >> N;
        vector<int> L(N);
        for(int i = 0 ; i < N ; i++){
            cin >> L[i];
        }
        bool m = false;
        for(int i = 0 ; i < N ; i++){
            int sumL = 0;
            int sumR = 0;
            for(int j = 0 ; j < i ; j++){
                sumL += L[j];
            }
            for(int j = i+1 ; j < N ; j++){
                sumR += L[j];
            }
            if(sumL == sumR){
                cout << i;
                m = true;
                break;
            }
        }
        if(!m){
           cout << -1;    
        }
    }
    return 0;
}
