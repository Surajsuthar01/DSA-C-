#include<iostream>
using namespace std;

// apend last k nodes of the linked list

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
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }
    head=n;
  }
  void insertattail(node*&head,int val){
    if(head==NULL){
        insertathead(head,val);
        return;
    }
    node*n=new node(val);
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
  int length(node*head){
    int l=0;
    node*temp=head;
    while(temp!=NULL){
      l++;
      temp=temp->next;
    }
    return l;

  }
  node*kappend(node*&head,int k){

    node*newhead;
    node*newtail;
    node*tail=head;
    int l=length(head);
    k=k%l;
    int count=1;
    while(tail->next!=NULL){
      if(count==l-k){
        newtail=tail;
      }
      if(count==l-k+1){
        newhead=tail;
      }
      tail=tail->next;
      count++;
    }
    newtail->next=NULL;
    tail->next=head;

    return newhead;
  }
  
  int main(){
    node*head=NULL;
    int arr[]={1,2,3,4,5,6};
    for(int i=0;i<6;i++){
      insertattail(head,arr[i]);

    }
    display(head);
    node*newhead=kappend(head,3);
    display(newhead);
    
    return 0;
  }