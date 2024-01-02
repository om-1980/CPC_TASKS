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

int findPivot(int arr[], int low, int high)
{
    if (high < low) {
        return -1;
    }
    if (high == low) {
        return low;
    }
 
    int mid = (low + high) / 2;
    if (mid < high && arr[mid] > arr[mid + 1])
        return mid;
 
    if (mid > low && arr[mid] < arr[mid - 1])
        return (mid - 1);
 
    if (arr[low] >= arr[mid])
        return findPivot(arr, low, mid - 1);
 
    return findPivot(arr, mid + 1, high);
}
 
int pivotBinarySearch(int arr[], int n, int key)
{
    int pivot = findPivot(arr, 0, n - 1);
 
    if (pivot == -1)
        return binary(arr, 0, n - 1, key);
 
    if (arr[pivot] == key)
        return pivot;
 
    if (arr[0] <= key)
        return binary(arr, 0, pivot - 1, key);
 
    return binary(arr, pivot + 1, n - 1, key);
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

    int ans = pivotBinarySearch(arr, n, key);
    cout<<"Element found at "<<ans<<" index"<<endl;

    return 0;
}