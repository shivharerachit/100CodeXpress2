#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    int N;
    int S[10000];
    int count;
    cin >> T;
    for(int i = 0 ; i < T ; i++){
        count = 0;
        cin >> N ;
        for(int j = 0 ; j < N ; j++){
            cin >> S[j];
            if((S[j]&1) == 0) count++;
        }
        if((float)count > (N/2.0) ) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}