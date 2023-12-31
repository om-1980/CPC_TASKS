#include<bits/stdc++.h>
using namespace std;

vector<int> two_odd_occuring(vector<int> nums) {
    vector<int> ans;
    int x = 0;
    for(int i=0; i<nums.size(); i++) {
        x = x ^ nums[i];
    }

    int set_bit;
    set_bit = x & ~(x-1);

    int a = 0, b = 0;
    for(int i = 0; i < nums.size(); i++) { 
        if(nums[i] & set_bit) {
            a = a ^ nums[i];
        } 
        else {
            b = b ^ nums[i];
        }
    } 
    if(a < b) {
        ans.push_back(a);
        ans.push_back(b);
    }
    else {
        ans.push_back(b);
        ans.push_back(a);
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

    vector<int> ans = two_odd_occuring(nums);

    cout<<ans[0]<<" and "<<ans[1]<<" occurs odd times."<<endl;  

    return 0;
}