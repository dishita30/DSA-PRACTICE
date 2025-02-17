#include <bits/stdc++.h>
using namespace std;

class node
{
    public:
      int data;
      node * right;
      node * left;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
   
    
};

node* buildTREE(node* root){
    cout<<'Enter the data'<<endl;
    int data;
    cin>>data;
    root = new node(data);
}

int main(){
    struct node * root = new node(1);
    root->left  = new node(2);
    root->left = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
}
