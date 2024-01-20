#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
           Node* temp = head;
           int c = 0;
           while(temp != NULL) {
               c++;
               temp = temp->next;
           }
           if(n>c) {
               return -1;
           }
           temp = head;
           for(int i=0; i<c-n; i++) {
               temp = temp->next;
           }
           
           return temp->data;
    }
};

int main()
{
  int T,i,n,l,k;

    cin>>T;

    while(T--){
    struct Node *head = NULL,  *tail = NULL;

        cin>>n>>k;
        int firstdata;
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
    cout<<obj.getNthFromLast(head, k)<<endl;
    }
    return 0;
}