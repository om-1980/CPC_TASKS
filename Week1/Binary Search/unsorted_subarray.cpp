#include <bits/stdc++.h>
using namespace std;

vector<int> printUnsorted(int arr[], int n) {
	vector<int> ans;
    int brr[n];
    for(int i=0; i<n;i++){
       brr[i]=arr[i];
    }
    sort(brr,brr+n);
    for(int i=0; i<n; i++){
        if(arr[i]!=brr[i]){
            ans.push_back(i);
            break;
        }
    }
        
    for(int i=n-1; i>=0; i--){
        if(arr[i]!=brr[i]){
             ans.push_back(i);
            break;
        }
    }
        
    if(n==1){
        return {0,0};
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    auto ans = printUnsorted(arr, n);
    cout << ans[0] << " " << ans[1] << "\n";
    
    return 0;
}

// } Driver Code Ends