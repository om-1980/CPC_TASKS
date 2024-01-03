#include<bits/stdc++.h>
using namespace std;

int maxLength(string S) {
    int ans = 1, n = S.size();
    vector<int> dp(n, 1);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            if(S[i] > S[j]){
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    return *max_element(dp.begin(), dp.end());
}

int main() { 
    string S;
    cin>>S;
    cout << maxLength(S) << endl;
    
    return 0; 
}