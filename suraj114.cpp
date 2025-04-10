#include<iostream>
#include<vector>
#include"bits/stdc++.h"
using namespace std;
// print catalan numbers time complexity is 

// int catalan(int n){
//         if(n <= 1){
//             return 1;
//         }
//         int res =0;
//         for(int i=0; i<=n-1; i++){
//             res += catalan(i) * catalan(n-i-1);
//         }
//         return res;
// }
// int main(){
//     for(int i=0; i<10; i++){
//         cout<<catalan(i)<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

struct node{
    int data;
    struct node*left;
    struct node*right;
    node(int val){
        data = val;
        left=NULL;
        right=NULL;
    }
};
vector<node*> constructtrees (int start, int end){
    vector<node*> trees;
    if(start > end){
        trees.push_back(NULL);
        return trees;
    }
    for(int i=start; i<=end; i++){
       vector<node*> leftsubtrees = constructtrees(start, i-1);
       vector<node*> rightsubtrees = constructtrees(i+1 ,end);
       for(int j=0; j<leftsubtrees.size(); j++){
        node*left= leftsubtrees[j];
        for(int k=0; k<rightsubtrees.size(); k++){
            node*right= rightsubtrees[k];
            node* Node = new node(i);
            Node->left = left;
            Node->right= right;
            trees.push_back(Node);
        }
       }
    } 
    return trees; 
    
}

void preorder(node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
     vector<node*> totaltrees = constructtrees(1,3);
     for(int i=0; i<totaltrees.size(); i++){
        cout<<(i+1)<<" : ";
        preorder(totaltrees[i]);
        cout<<endl;
     }  
     return 0; 
}
