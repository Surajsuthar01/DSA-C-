#include<iostream>
using namespace std;
class node {
    public:
    int data;
    node*next;
   node(int val){
    data = val;
    next= NULL;

   }
};
void insertattail(node*&head,int val){
    node*n =new node(val);
    if(head==NULL){
        head = n;
        return ;

    }
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    }
    void display(node*head){
        node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
         }
         //itrative method for reverse the number 
         node* reverse(node* &head){
            node* prevptr=NULL;
            node* currptr=head;
            node* nextptr;
            while(currptr!=NULL){
                nextptr=currptr->next; 
                currptr->next=prevptr;

                prevptr = currptr;
                currptr= nextptr;

            }
            return prevptr;
         }
          
       //  recursive way to reverse the number 
       node*reverserecursive(node* &head){
        if(head==NULL|| head->next==NULL){
            return head;
             }
             node*newhead= reverserecursive(head->next);
            head->next->next=head;
            head->next=NULL;
          return newhead;  
       } 


    int main(){
        node*head=NULL;
        insertattail(head,1);
        insertattail(head,3);
        insertattail(head,5);
        insertattail(head,6);
        insertattail(head,7);
        display(head);
        node*newhead=reverse(head);
        display(newhead);
        // node*newhead=reverserecursive(head);
        // display(newhead);

        return 0;

    }