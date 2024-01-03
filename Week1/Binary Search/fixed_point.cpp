#include<bits/stdc++.h>
using namespace std;

vector<int> valueEqualToIndex(int arr[], int n) {

	vector<int>ans;
	for(int i=0; i<n; i++) {
	    if(arr[i]==i+1) {
	        ans.push_back(i+1);
	    }
	}
	return ans;
}

int main() {
    int n, i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++) {
         cin >> arr[i];
    }
    auto ans = valueEqualToIndex(arr, n);
    if (ans.empty()) {
        cout << "Not Found";
    } 
    else {
        for (int x: ans) {
            cout << x << " ";
        }
    }
    cout << endl;

    return 0;
}