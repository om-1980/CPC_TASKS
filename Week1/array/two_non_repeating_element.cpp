#include<bits/stdc++.h>
using namespace std;

vector<int> findNonRepeating(vector<int> nums) {
    vector<int> ans;
    sort(nums.begin(), nums.end());
    int i=0; 
    while(i < nums.size()) {
        if(nums[i]!=nums[i+1]) {
            ans.push_back(nums[i]);
            i++;
        }
        else {
            i = i+2;
        }
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

    vector<int> ans = findNonRepeating(nums);
    for(int i=0; i<ans.size(); i++) {
        cout<<ans[i]<<" ";
    }
    cout<<"are non-repeating elements."<<endl;

    return 0;
}