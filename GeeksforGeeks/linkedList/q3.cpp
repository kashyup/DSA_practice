//insertion at the begining of the linked list
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int d){
        data=d;
        next=NULL;
    }
};

Node *insertBegin(Node *head,int x){
    Node *temp=new Node(x);
    temp->next=head;
    return head;

}
Node *insertEnd(Node*head,int x){
    Node *temp=new Node(100);
    while(head==NULL){
        return temp;
    }
    Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
        curr->next=temp;
        return curr;
    }
}
void print(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<(curr->data)<<" ";
        curr=curr->next;
    }
}
 int main(){
     Node*head=NULL;
    
     insertBegin(head,10);
     insertBegin(head,20);
     insertBegin(head,30);
     insertEnd(head,50);
     print(head);
}