#include<bits/stdc++.h>
using namespace std;

bool binary(int arr[], int n, int key) {
    sort(arr, arr+n);
    int low = 0, high = n-1;
    // int mid = low + (high - low)/2;
    while(low<=high) {
        int mid = low + (high - low)/2;
        if(arr[mid] == key) {
            return true;
        }
        else if(arr[mid] > key) {
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }
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
    int key;
    cout<<"Enter the element to be found: ";
    cin>>key;

    bool ans = binary(arr, n, key);
    if(ans) {
        cout<<key<<" found."<<endl;
    }
    else {
        cout<<key<<" doesn't found."<<endl;
    }

    return 0;
}