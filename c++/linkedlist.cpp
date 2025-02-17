#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public :
    int val;
    Node* next;
     
    Node(int data){
        val = data;
        next = NULL;
    }
};

void insertNode(Node* &head, int val){
    Node* new_node = new Node(val);
    new_node -> next = head;
    head = new_node;
}

void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<"->";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node*head = Null;
    insertNode(2);
    display(head);
    insertNode(1);
    display(head);
    return 0;
}