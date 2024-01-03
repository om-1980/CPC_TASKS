#include <bits/stdc++.h> 
using namespace std; 

#define NA -1 

void moveToEnd(int mPlusN[], int size) { 
    int j = size - 1; 
    for (int i = size - 1; i >= 0; i--) {
	    if (mPlusN[i] != -1) { 
	    	mPlusN[j] = mPlusN[i]; 
		    j--; 
	    } 
    }
} 

void merge(int mPlusN[], int N[], int m, int n) {    
    int i = n; 
    int j = 0; 
    int k = 0; 
    while (k < (m + n)) { 
    	if ((j == n)||(i < (m + n) && mPlusN[i] <= N[j])) { 
    		mPlusN[k] = mPlusN[i]; 
	    	k++; 
		    i++; 
	    } 
	    else { 
    	    mPlusN[k] = N[j]; 
	        k++; 
	        j++; 
	    } 
    } 
} 


int main() {
    int n, m;
    cin >> n >> m;
    int N[n];
    for (int i = 0; i < n; i++) {
         cin >> N[i];
    }
    int mPlusN[m];
    for (int i = 0; i < m; i++) {
         cin >> mPlusN[i];
    }

    moveToEnd(mPlusN, m + n); 
    merge(mPlusN, N, m, n); 

    for (int i = 0; i < m+n; i++) {
        cout << mPlusN[i] << " "; 
    }
    cout << endl; 

    return 0; 
} 
