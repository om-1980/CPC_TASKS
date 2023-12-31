#include<bits/stdc++.h>
using namespace std;

bool hasPair(vector<int> nums, int sum) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int l=0, r=n-1;
	while(l<r) {
	    int x = nums[l] + nums[r];
        if(x == sum) {
            return true;
        }
        else if(x > sum) {
            r--;
        }
        else {
            l++;
        }
	}
	return false;
}

int main() {
    int n, sum;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int> nums;
    cout<<"Enter elements of array: ";
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        nums.push_back(x);
    }
    cout<<"Enter the sum: ";
    cin>>sum;

    bool ans = hasPair(nums, sum);
    if(ans) {
        cout<<"Pair found!"<<endl;
    }
    else {
        cout<<"Pair doesn't found!"<<endl;
    }

    return 0;
}