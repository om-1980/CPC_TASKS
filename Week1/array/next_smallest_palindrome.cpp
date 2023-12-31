#include<bits/stdc++.h>
using namespace std;

vector<int> nextSmallPalindrome(vector<int> nums) {
    int n = nums.size();
    vector<int> ans(n);
	bool change = true;
	int l = 0, r = n-1;
	while(l < r) {
	    if(nums[l] < nums[r]) {
	        change = true;
	    }
	    else if(nums[l] > nums[r]) {
	        change = false;
	    }
	    nums[r] = nums[l];
	    l++;
	    r--;
	}
	for(int i=0; i<n; i++) {
	    ans[i] = nums[i];
	}
	    
	int ind = n/2;
	bool carry = change;
	while(carry && ind<n) {
	    if(ans[ind] == 9) {
	        ans[ind] = 0;
	        ans[n-1-ind] = 0;
	    }
	    else {
	        ans[ind]++;
	        ans[n-1-ind] = ans[ind];
	        carry = 0;
	    }
	    ind++;
	}
	if(carry) {
	       ans[0] = 1;
	    ans.push_back(1);
	}
	return ans;
}

int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int> nums;
    cout<<"Enter elements of array: ";
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        nums.push_back(x);
    }

    vector<int> ans = nextSmallPalindrome(nums);
    for(int i=0; i<n; i++) {
        cout<<ans[i]<<" ";
    }
    cout<<" is the next smallest palindrome."<<endl;

    return 0;
}