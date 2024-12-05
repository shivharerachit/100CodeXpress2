#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int T;
    cin >> T;
    while(T--){
        int N, M;
        cin >> N >> M;
        vector<int> H(N);
        vector<int> A(M);
        for(int j = 0 ; j < N ; j++){
            cin >> H[j];
        }
        for(int k = 0 ; k < M ; k++){
            cin >> A[k];
        }
        int max = 0;
        int highest = 100001;
        for(int i = 0 ; i < M ; i++){
            int count = 0;
            for(int j = 0 ; j < N ; j++){
                if(H[j] % A[i] == 0) count++;
            }
            if(count > max){
                max = count;
                highest = A[i];
            }
            else if(count == max && highest > A[i]) {
                highest = A[i];
            } 
        }
        cout << highest << "\n";
    }
    return 0;
}
