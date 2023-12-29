#include<bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> ans;
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    int n1 = nums1.size();
    int n2 = nums2.size(); 
    int i = 0, j = 0;
    while(i<n1 && j<n2) {
        if(nums1[i] < nums2[j]) {
            i++;
        }
        else if(nums1[i] > nums2[j]) {
            j++;
        }
        else {
            if(i == 0 || nums1[i-1] != nums1[i]) {
                ans.push_back(nums1[i]);
            }
            i++;
            j++;
        }
    }
    return ans;
}

int main() {
    int n1, n2;
    cout<<"Enter size of first array: ";
    cin>>n1;
    vector<int>nums1;
    cout<<"Enter the elements of first array: ";
    for(int i=0; i<n1; i++) {
        int x;
        cin>>x;
        nums1.push_back(x);
    }
    cout<<"Enter size of second array: ";
    cin>>n2;
    vector<int>nums2;
    cout<<"Enter the elements of second array: ";
    for(int i=0; i<n2; i++) {
        int x;
        cin>>x;
        nums2.push_back(x);
    }
    vector<int> ans = intersection(nums1, nums2);
    cout<<"Intersection of two arrays are ";
    for(int i=0; i<ans.size(); i++) {
        cout<<ans[i]<<", ";
    }
    cout<<endl;

    return 0;
}