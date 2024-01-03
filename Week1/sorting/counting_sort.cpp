#include <bits/stdc++.h>
using namespace std;

vector<int> counting_sort(vector<int>& nums) {

	int n = nums.size();
	int maxElem = 0;

	for (int i = 0; i < n; i++) {
		maxElem = max(maxElem, nums[i]);
    }
    
	vector<int> countArray(maxElem + 1, 0);
	for (int i = 0; i < n; i++) {
		countArray[nums[i]]++;
    }
	for (int i = 1; i <= maxElem; i++) {
		countArray[i] += countArray[i - 1];
    }

	vector<int> ans(n);
	for (int i = n - 1; i >= 0; i--) {
		ans[countArray[nums[i]] - 1] = nums[i];
		countArray[nums[i]]--;
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

	vector<int> ans = counting_sort(nums);
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
    }
    cout<<endl;

	return 0;
}
