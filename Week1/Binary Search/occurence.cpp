#include<bits/stdc++.h>
using namespace std;

int count(int arr[], int n, int x) {
    int *low = lower_bound(arr, arr+n, x);
 
    if (low == (arr + n) || *low != x)
        return 0;
    
    int *high = upper_bound(low, arr+n, x);    

    return high - low;
}

int main() {
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
  
    auto ans = count(arr, n, x);
    cout << ans << "\n";
  
    return 0;
}

// } Driver Code Ends