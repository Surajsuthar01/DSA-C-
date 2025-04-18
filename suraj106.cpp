#include<iostream>
#include <vector>
using namespace std;
// lowest common ancestor in tree
struct node{
    int data;
    struct node * left;
    struct node * right;
    node(int val){
        data=val;
        left =NULL;
        right =NULL;
    }
};
bool getpath(node*root, int key, vector<int>&path){
    if(root == NULL){
        return false;
    }
    path.push_back(root->data);
    if(root->data == key){
        return true;
    }
    if(getpath(root->left, key, path) || getpath(root->right, key, path)){
        return true;
    }
    path.pop_back();
    return false;

}

int LCA(node*root,int n1, int n2){
    vector<int> path1, path2;
  if(!getpath(root, n1, path1) || !getpath(root, n2, path2)){
    return -1;
  }
  // pc means path change
  int pc;
  for(pc = 0; pc<path1.size() && path2.size(); pc++){
     if(path1[pc] != path2[pc]){
        break;
     }
  }
  return path1[pc-1];
}

 node*LCA2(node*root, int n2, int n1){
    if(root == NULL){
        return NULL;
    }
    if(root->data  == n1 || root->data == n2){
        return root;
    }

node*leftLCA = LCA2(root->left, n2, n1);
node*rightLCA =LCA2(root->right, n2, n1);
if(leftLCA && rightLCA){
    return root;
}
if(leftLCA != NULL){
    return leftLCA;

}
return rightLCA;
}


int main(){
    node*root =new node(1);
    root->left =new node(2);
    root->right =new node(3);
    root->left->left =new node(4);
    root->right->left =new node(5);
    root->right->right =new node(6);
    root->right->left->left = new node(7);
    
    // int n1 = 7;
    // int n2 = 6;
    // int lca = LCA(root , n1, n2);
    // if(lca == -1){
    //     cout<< "lca  doesn't exits"<< endl;
    // } else{
    //     cout<< "lca : "<< lca << endl;
    // }

    // FOR lowet common ancestor through pointer 
    int n1 =7;
    int n2 =6;
    node*lca =LCA2(root, n1, n2);
    if(lca == NULL){
        cout<<"LCA doesn't exit "<<endl;
    }else{
        cout<<"LCA :"<< lca->data<<endl;
    }
   

    return 0;
}
