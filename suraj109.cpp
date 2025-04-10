#include<iostream>
#include"bits/stdc++.h"
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node*right;
    node(int val){
        data = val;
        left = NULL;
        right =NULL;
    }
};
node*searchinbst(node*root, int key){
    if(root == NULL){
        return NULL;
    }
    if(root ->data == key){
        return root;
    }
    // data >  key
    if (root->data > key){
        return searchinbst(root->left, key);
    }
    // data <key
    return searchinbst(root->right, key);
}
int main(){
    node*root = new node(4);
    root->left = new node(2);
    root->right = new node(5);
    root->left->left = new node(1);
    root->left->right= new node(3);
    root->right->right = new node(6);
    if (searchinbst(root, 10)== NULL){
        cout<<"key doesn't exit";

    } else{
        cout<<"key exits";
    }
    return 0;

}