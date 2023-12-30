#include<bits/stdc++.h>
using namespace std;

int odd_occuring(vector<int> nums) {
    int ans = 0;
    for(int i=0; i<nums.size(); i++) {
        ans = ans ^ nums[i];
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

    int occ = odd_occuring(nums);
    cout<<occ<<" occurs odd times."<<endl;  

    return 0;
}