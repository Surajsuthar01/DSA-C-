#include<iostream>
#include"bits/stdc++.h"
// bulid balance bst from sorted array
using namespace std;
struct node{ 
    int data;
    struct node* left;
    struct node* right;
    node(int val){
        data = val;
        left= NULL;
        right = NULL;
    }
};
node * sortedarraytobst(int arr[], int start, int end){
    if (start > end){
        return NULL;
    }
    int mid = (start + end)/2;
    node*root = new node(arr[mid]);
    root->left =sortedarraytobst(arr, start, mid-1);
    root->right =sortedarraytobst(arr, mid+1, end);
    
    return root;
}
void printpreorder(node*root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    printpreorder(root->left);
    printpreorder(root->right);
}
int main(){
    int arr[]= {10,20,30,40,50};
    node*root = sortedarraytobst(arr,0,4);
    printpreorder(root);
    cout<<endl;
    return 0;
}

