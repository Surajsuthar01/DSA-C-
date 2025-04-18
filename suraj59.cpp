#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int val){
        data=val;
        next=NULL;

    }
};
void insertattail(node*&head,int val){
    node*n = new node(val);
    if(head==NULL){
        head=n;
        return;

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
// void makecycle(node*&head,int pos){
//     node* temp=head;
//     node*starnode;
//     int count =1;
//     while(temp->next!=NULL){
//         if(count==pos){
//             starnode=temp;
//         }
//         temp=temp->next;
//         count++;
//     }
//     temp->next=starnode;
// }

bool detectcycle(node*&head){
    node*slow=head;
    node*fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            return true;

        }
    }
    return false;

}
void makecycle(node*&head,int pos){
    node* temp=head;
    node*starnode;
    int count =1;
    while(temp->next!=NULL){
        if(count==pos){
            starnode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=starnode;
}

void removecycle(node*&head){
    node* slow=head;
    node* fast=head;
    do{
       slow = slow->next;
       fast = fast->next->next;

    } while(slow!=fast);
    fast =head;
    while (slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
     slow->next=NULL;

}

int main(){
    node*head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertattail(head,5);
    insertattail(head,6);
    insertattail(head,7);
    insertattail(head,8);
    makecycle(head,2);
    // display(head);
    cout<<detectcycle(head)<<endl;
    removecycle(head);
    cout<<detectcycle(head)<<endl;
    display(head);
    
 return 0;

}