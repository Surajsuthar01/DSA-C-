#include<iostream>
using namespace std;
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
    node*n = new node(val);
    n->next=head;
    if(head!=NULL){
    head->prev =n;
    }
    head =n;
}

void insertattail(node*&head,int val){
    if(head==NULL){
        insertathead(head,val);
        return;

    }
    node*n=new node(val);
    node*temp=head;
    while(temp->next !=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;

}
void  display(node*&head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main (){
    node*head=NULL;
    insertathead(head,4);
    insertattail(head,5);
    insertattail(head,6);
    insertattail(head,7);
    display(head);
    insertathead(head,3);
    display(head);
    return 0;


}