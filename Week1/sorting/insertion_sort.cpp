#include<bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &nums){
    int n = nums.size();
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = nums[i];
        j = i - 1;
        while (j >= 0 && nums[j] > key) {
            nums[j + 1] = nums[j];
            j = j - 1;
        }
        nums[j + 1] = key;
    }
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

    insertion_sort(nums);
	for (int i = 0; i < n; i++) {
		cout << nums[i] << " ";
    }
    cout<<endl;

	return 0;
}