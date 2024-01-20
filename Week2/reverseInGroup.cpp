#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
    
};

void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

class Solution
{
    public:
    struct node *reverseIt (struct node *head, int k)
    {
        vector<int> arr;
        
        node *temp = head;
        while(temp){
            arr.push_back(temp->data);
            temp = temp->next;
        }
        
        head = NULL;
        node *tail = NULL;
        
        int index = k-1;
        
        while(index < arr.size()){
        
            for(int i=index; i>=index-(k-1); i--){
                if(head == NULL){
                    head = new node(arr[i]);
                    tail = head;
                }
                else{
                    tail->next = new node(arr[i]);
                    tail = tail->next;
                }
            }
            
            index += k;
        }
        
        for(int i=arr.size()-1; i>=index-(k-1); i--){
            tail->next = new node(arr[i]);
            tail = tail->next;
        }
        
        return head;
    }
};

int main(void)
{
    int t;
    cin>>t;
     
    while(t--)
    {
        struct node* head = NULL;
        struct node* temp = NULL;
        int n;
        cin >> n;
         
        for(int i=0 ; i<n ; i++)
        {
            int value;
            cin >> value;
            if(i == 0)
            {
                head = new node(value);
                temp = head;
            }
            else
            {
                temp->next = new node(value);
                temp = temp->next;
            }
        }
        
        int k;
        cin>>k;
        
        Solution ob;
        head = ob.reverseIt(head, k);
        printList(head);
    }
     
    return(0);
}
