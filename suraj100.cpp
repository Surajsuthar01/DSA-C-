#include<iostream>
#include"bits/stdc++.h"
using namespace std;
struct node {
    int data;
    struct node * left;
    struct node * right;
    node(int val){
        data =val;
        left = NULL;
        right = NULL;
    }
};
// this is O(n) time complexity means (o(n)^2)
int height(node*root){
    if(root ==NULL){
        return 0;
    }
    int lh =height(root->left);
    int rh =height(root->right);
    return max(lh,rh) +1;
}

bool isbalance(node*root){
    if(root ==NULL){
        return true;
    }
    if(isbalance (root->left)== false){
        return false;
    }
    if(isbalance(root->right)== false){
        return false;
    }
    int lh =height(root->left);
    int rh =height(root->right);
    if(abs(lh-rh)<=1){
        return true;
    }
    else{
        return false;
    }
}

// this for o(n) time complexitiy in balance tree
bool isbalanced(node*root,int *height){
    if(root ==NULL){
        return true;
    }
    int lh =0,rh= 0;
    if(isbalanced(root->left,&lh)==false){
        return false;

    }
    if(isbalanced(root->right,&rh)==false){
        return false;
    }

    *height =max(lh,rh)+1;
    if(abs(lh-rh)<=1){
        return true;

    }
    else{
        return false;
    }
}
int main(){
    node*root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root ->right->right=new node(7);
    if (isbalance(root)){
        cout<<"balance tree"<<"\n";

    }
    else{
        cout<<"unbalance tree"<<"\n";
    }

    int height =0;
    if(isbalanced(root,&height)== true){
        cout<<"balance tree"<<"\n";

    }
    else{
        cout<<"not balance tree"<<"\n";
    }
    return 0;   
}

