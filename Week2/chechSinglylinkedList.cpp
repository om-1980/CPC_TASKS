#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
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
    Node* ReverseList(Node* &head)
    {
        Node* curr = head;
        Node* prev = NULL;
        Node* forw;
        while(curr!=NULL)
        {
            forw = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forw;
        }
        return prev;
    }
    bool isPalindrome(Node *head)
    {
        if(head == NULL || head->next == NULL)
        return head;
        Node *prev = head,*slow = head,*fast = head;
        while(fast!=NULL && fast->next!=NULL)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = NULL;
        Node* ptr = ReverseList(slow);
        while(head!=NULL && ptr!=NULL){
            if(head->data != ptr->data)
            {
                return false;
            }
            head = head->next;
            ptr = ptr->next;
        }
        if(head)
        {
            return true;
        }
        if(ptr)
        {
            return true;
        }
        return true;
    }
};


int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}