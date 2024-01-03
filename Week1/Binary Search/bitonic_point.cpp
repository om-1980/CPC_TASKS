#include <bits/stdc++.h>
using namespace std;

int findMaximum(int arr[], int n) {
	int low = 0; 
	int high = n-1;
	    
	while(low<high) {
	    int mid = (high+low)/2;
	    if(arr[mid]<arr[mid+1]) {
	        low=mid+1;
	    }
	    else {
	        high=mid;
	    }
	}
	return arr[low];
}

int main() {
    int n, i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    auto ans = findMaximum(arr, n);
    cout << ans << "\n";
    
    return 0;
}