#include <bits/stdc++.h>
using namespace std;

int findMin(int arr[], int n){
    int ans =0;
    int low=0,high = n-1;
       
    while(low<high){
        int mid = low + (high-low)/2;
            
        if(arr[mid]>arr[high]) {
            low=mid+1;
        }
        else {
            high=mid;
        }
    }
    return arr[low];
}



int main() {
	int n;
	cin>>n;
	int i,a[n];
	for(i=0;i<n;i++) {
		cin>>a[i];
	}
	cout<<findMin(a, n)<<endl;
	
	return 0;
}