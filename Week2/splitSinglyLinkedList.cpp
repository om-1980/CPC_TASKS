#include <iostream>
#include <stdio.h>
using namespace std;

struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

void append(struct Node** headRef, int newData)
{
	struct Node* new_node = new Node(newData);
	struct Node *last = *headRef;
	
	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    return;
	}
	while (last->next != NULL)last = last->next;
	last->next = new_node;
}

void printList(struct Node *node)
{
    while(node!=NULL){
        printf("%d ", node->data);
        node = node->next;
    }
    cout<<endl;
} 

void alternatingSplitList(struct Node* head) 
{
    //Your code here
    if(head->next==NULL)
    {
        a=head;
        b=NULL;
        return;
        
    }
    Node* p1=head;
    Node* p2=head->next;
    
    Node* q1=p1;
    Node* q2=p2;
    
    while(q1!=NULL && q2!=NULL)
    {
        if(q1->next!=NULL)
            q1->next=q1->next->next;
        if(q2->next!=NULL)
            q2->next=q2->next->next;
        
        q1=q1->next;
        q2=q2->next;
    }
    
    a=p1;
    b=p2;
    
    p1=NULL;
    p2=NULL;
    q1=NULL;
    q2=NULL;
    return;
}

struct Node* a;
struct Node* b;

int main()
{
    int test;
    cin>>test;
    
    while(test--)
    {
        a=b=NULL;
        struct Node* head = NULL;
        
        
        int n, k;
        cin>>n;
        
        while(n--)
        {
            cin>>k;
            append(&head, k);
        }
        
        alternatingSplitList(head);
        printList(a);
        printList(b);
    }
    return 0;
}