#include<iostream>
#include"bits/stdc++.h"
using namespace std;
// nodes at distance k in binary tree
struct node {
    int data;
    struct node *left;
    struct node *right;
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void printsubtreenodes(node *root, int k){
    if(root == NULL || k<0){
        return;
        }
        if(k== 0){
            cout<<root->data<<" ";
            return;
        }
        printsubtreenodes(root->left, k-1);
        printsubtreenodes(root->right, k-1);
}

int printnodesatk(node*root,node *target, int k){
    if(root == NULL){
        return -1;
    }
    if(root == target){
        printsubtreenodes(root,k);
        return 0;
    }
    int dl = printnodesatk(root->left, target, k);
    if(dl != -1){
      if(dl + 1 == k){
        cout<<root->data<<" ";
      }  else{
        printsubtreenodes(root->right ,k-dl-2);
      }
      return 1+dl;
    }


    int dr = printnodesatk(root->right,target, k);
    if(dr != -1){
      if(dr + 1 == k){
        cout<<root->data<<" ";
      }  else{
        printsubtreenodes(root->left ,k-dr-2);
      }
      return 1+dr;
    }
    return -1;
    
}

int main(){
    node*root =new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    printnodesatk(root,root->left,1);
    return 0;
}