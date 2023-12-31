#include<bits/stdc++.h>
using namespace std;

bool find3Numbers(vector<int> nums, int sum) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    for(int i=0; i<n; i++) {
        int j=i+1, k=n-1;
        while(j<k) {
            if(nums[i]+nums[j]+nums[k]>sum) {
                k--;
            }
            else if(nums[i]+nums[j]+nums[k]<sum) {
                j++;
            }
            else {
                return true;
            }
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

    bool ans = find3Numbers(nums, sum);
    if(ans) {
        cout<<"Triplet sum is found."<<endl;
    }
    else {
        cout<<"Triplet sum is not found."<<endl;
    }

    return 0;
}