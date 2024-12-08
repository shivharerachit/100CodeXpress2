#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    int maxSum;
    int bannedSize;
    vector<int> banned;
    cin >> N >> maxSum >> bannedSize;
    banned.resize(bannedSize);
    for(int i = 0 ; i < bannedSize ; i++){
        cin >> banned[i];
    }
    int sum = 0;
    int count = 0;
    for(int i = 1 ; i <=w N ; i++){
        if (find(banned.begin(), banned.end(), i) != banned.end()) {
            continue;
        } else {
            if ((sum+i) <= maxSum){
                sum+=i;
                count++;
            }
        }
    }
    cout << count;
    
    return 0;
}
