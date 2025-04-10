#include<iostream>
#include"bits/stdc++.h"
// construct a binary search tree from preorder
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int val){
      data = val;
      left = NULL;
      right = NULL;
    }
};
node* constructbst(int preorder[], int* preorderIdx, int key, int min, int max, int n){
    if(*preorderIdx >= n){
        return NULL;
    }
    node* root = NULL;
    if(key > min && key < max){
         root = new node(key);
        *preorderIdx = *preorderIdx + 1;
        if(*preorderIdx < n){
            root->left = constructbst(preorder, preorderIdx, preorder[*preorderIdx], min, key, n);

        }
        if(*preorderIdx < n){
            root ->right = constructbst(preorder, preorderIdx, preorder[*preorderIdx], key, max, n);
        }
    
    }
   return root; 
}
void printpreorder(node * root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    printpreorder(root->left);
    printpreorder(root->right);
}

int main(){
    int preorder[] = {10,2,1,13,11};
    int n = 5;
    int preorderIdx =0;
    node * root = constructbst(preorder, &preorderIdx, preorder[0], INT_MIN, INT_MAX, n);
    printpreorder(root);
    return 0;
}