#include<iostream>
#include"bits/stdc++.h"
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node*right;
    node(int val){
        data= val;
        left = NULL;
        right = NULL;
    }
};

node*insertbst(node*root ,int val){
    if(root == NULL){
        return new node(val);
    }
    if (val < root ->data){
        root->left = insertbst(root->left, val);
    }
    else{  // val > root->data
        root->right = insertbst(root->right, val);
    }
    return root;
}
void inorder(node*root ){
    if(root == NULL){
        return;
    }  
    inorder(root->left );
    cout<<root->data<<" ";
    inorder(root->right );

}
int main(){
    node*root =NULL;
    root = insertbst(root, 5);
    insertbst(root, 1);
    insertbst(root, 3);
    insertbst(root, 4);
    insertbst(root, 2);
    insertbst(root, 7);
    
    inorder(root);
    return 0;

}

