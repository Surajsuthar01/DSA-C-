#include<iostream>
#include"bits/stdc++.h"
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int val){
        data = val;
        left =NULL;
        right =NULL;
    }
};
void flatten(node*root){
    if(root == NULL || (root->left == NULL && root->right == NULL)){
        return;
    }
    if(root->left != NULL){
        flatten(root->left);

        node*temp = root->right;
        root->right =root->left;
        root->left = NULL;
        
        node*t = root->right;
        while(t->right != NULL){
            t= t->right;
        }
        t->right =temp;

    }
    flatten(root->right);
}

void inorderprint(node *root){
   if(root == NULL){
    return;
   }
   inorderprint(root->left);
   cout<<root->data<<" ";
   inorderprint(root->right);
}

int main(){
    node*root =new node(4);
    root->left =new node(9);
    root->right =new node(5);
    root->left->left = new node(1);
    root->left->right = new node(3);
    root->right->right= new node(6);
    flatten(root);
    inorderprint(root);

}
