#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i)  {
    int index = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    int largest = index;
    if(left < n && arr[left] > arr[largest]){
        largest = left;
    }
    if(right < n && arr[right] > arr[largest]){
        largest = right;
    }
    if(largest != index){
        swap(arr[index],arr[largest]);
        index = largest;
        heapify(arr,n,index);
    }
}

void buildHeap(int arr[], int n) { 
    for(int i=n/2 - 1;i>=0;i--){
        heapify(arr,n,i);
    }
}

void heapSort(int arr[], int n) {
    buildHeap(arr,n);
    while(n!=0){
        swap(arr[0],arr[n-1]);
        n--;
        heapify(arr,n,0);
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

    heapSort(nums, n);
	for (int i = 0; i < n; i++) {
		cout << nums[i] << " ";
    }
    cout<<endl;

	return 0;
}