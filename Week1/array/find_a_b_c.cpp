#include<bits/stdc++.h>
using namespace std;

vector<int> find(int n) {
    vector<int> ans;
    for(int i=1; i<=n; i++) {
        for(int j=i; j<=n; j++) {
            int x = i*i + j*j;
            int y = sqrt(x);
            if(y*y == x && y<=n) {
                ans.push_back(i);
                ans.push_back(j);
                ans.push_back(y);
            }
        }
    }
    return ans;
}

int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    vector<int> ans = find(n);
    for(int i=0; i<ans.size(); i++) {
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    return 0;
}