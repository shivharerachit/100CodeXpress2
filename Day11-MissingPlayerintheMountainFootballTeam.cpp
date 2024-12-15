#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin >> T;
    int n;
    int sum;
    while(T--){
        cin >> n;
        sum = 0;
        vector<int> jn(n);
        int i;
        for(i = 0 ; i < n ; i++){
            sum += (i+1);
            cin >> jn[i];
        }
        for(int i = 0 ; i < n ; i++){
            sum -= jn[i];
        }
        cout << sum << "\n";
    }    
    return 0;
}
