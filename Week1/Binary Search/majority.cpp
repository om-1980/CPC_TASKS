#include<bits/stdc++.h>
using namespace std;

int binary(int arr[], int low, int high, int key) {
    if(high < low) {
        return -1;
    }

    int mid = low + (high - low)/2;
    if(arr[mid]==key) {
        return mid;
    }
    if(arr[mid] < key) {
        return binary(arr, mid+1, high, key);
    }

    return binary(arr, low, mid-1, key);
}

bool isMajority(int arr[], int n, int x) {
	int i = binary(arr, 0, n - 1, x);

	if (i == -1) {
		return false;
    }

	if (((i + n / 2)<=(n - 1)) && arr[i+n/2]==x)
		return true;
	else
		return false;
}

int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int x;
    cin>>x;

    bool ans = isMajority(arr, n, x);
    if(ans) {
        cout <<x<<" appears more than "<<n/2<<" times."<<endl;
    }
    else {
        cout<<x<<" does not appear more than "<<n/2<<" times."<<endl;
    }

    return 0;
}