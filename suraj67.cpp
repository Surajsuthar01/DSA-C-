#include<iostream>
using namespace std;

// put even position nodes  after odd position nodes
class node{
    public:
    int data;
    node*next;
    node*prev;
    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void insertathead(node*&head,int val){
    node*n =new node(val);

    if(head!=NULL){
        head->prev=n;
    }
    n->next=head;

    head=n;
}

void insertattail(node*&head,int val){
    if(head==NULL){
        insertathead(head,val);
        return ;
    }
    node*n =new node(val);
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}
void display(node*&head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
}

void evenafterodd(node*&head){
    node*odd=head;
    node*even=head->next;
    node*evenstart=even;
    while(odd->next!=NULL&&even->next!=NULL){
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
        
    }
    odd->next=evenstart;
    if(odd->next!=NULL){
        even->next!=NULL;
    }

}
int main(){
    node*head=NULL;
    int arr[]={1,2,3,4,5,6,7};
    for(int i=0;i<7;i++){
        insertattail(head,arr[i]);  
    }
    display(head);
    evenafterodd(head);
    display(head);

    return 0;
}