#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    Node* curr1 = head1;
    Node* curr2 = head2;
    Node* result = NULL;
    if(curr1->data < curr2->data) {
        head1 = curr1;
        curr1 = curr1->next;
    }
    else {
        head1 = curr2;
        curr2 = curr2->next;
    }
    result = head1;
    
    while(curr1 != NULL or curr2 != NULL) {
        if(curr1==NULL) {
            result->next = curr2;
            curr2 = curr2->next;
            result = result->next;
        }
        else if(curr2==NULL) {
            result->next = curr1;
            curr1 = curr1->next;
            result = result->next;
        }
        else {
            if(curr1->data < curr2->data) {
                result->next = curr1;
                curr1 = curr1->next;
                result = result->next;
            }
            else {
                result->next = curr2;
                curr2 = curr2->next;
                result = result->next;
            }
        }
    }
    return head1;
} 

void printList(struct Node *n)
{
    while (n!=NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        int data;
        cin>>data;
        struct Node *head1 = new Node(data);
        struct Node *tail1 = head1;
        for (int i = 1; i < n; ++i)
        {
            cin>>data;
            tail1->next = new Node(data);
            tail1 = tail1->next;
        }

        cin>>data;
        struct Node *head2 = new Node(data);
        struct Node *tail2 = head2;
        for(int i=1; i<m; i++)
        {
            cin>>data;
            tail2->next = new Node(data);
            tail2 = tail2->next;
        }

        Node *head = sortedMerge(head1, head2);
        printList(head);
    }
    return 0;
}
 