#include<bits/stdc++.h>
using namespace std;

int missing_number(vector<int> nums) {
    int ans;
    int n = nums.size();
    int total_sum = (1 + n+1)*(n+1)/2;
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += nums[i];
    }
    ans = total_sum - sum;
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

    int missing = missing_number(nums);
    cout<<missing<<" is the missing number."<<endl;

    return 0;
}