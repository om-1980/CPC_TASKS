#include <bits/stdc++.h>
using namespace std;

void swap(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void bubbleSort(int arr[], int n) {
    for(int i=0; i<n; i++){
        for(int j=1; j<n-i; j++){
            if(arr[j]<arr[j-1]) 
                swap(arr[j], arr[j-1]);
        }
    }
}

int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int nums[n];
    cout<<"Enter elements of array: ";
    for(int i=0; i<n; i++) {
        cin>>nums[i];
    }

    bubbleSort(nums, n);
	for (int i = 0; i < n; i++) {
		cout << nums[i] << " ";
    }
    cout<<endl;

	return 0;
}