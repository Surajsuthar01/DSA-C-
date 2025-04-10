#include<iostream>
#include"bits/stdc++.h"
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
// check for binary search tree
// time complexcity is big of n where n is number of nodes in tree 
bool isbst(node *root ,node*min=NULL,  node* max=NULL){
    if (root == NULL){
        return true;
    }
    if(min != NULL && root->data <= min->data){
        return false;
    }
    if (max != NULL && root->data >= max->data){
        return false;
    }
    bool leftvalid = isbst(root->left, min,root);
    bool rightvalid = isbst(root->right,root,max);
    return leftvalid and rightvalid;

}
int main(){
        node*root = new node(5);
        root->left= new node(2);
        root->right  = new node(7);
        if(isbst(root, NULL, NULL)){
       cout<<"valid bst"<<endl;
        }else{
            cout<<"invalid bst"<<endl;
        }
        return 0;
}

