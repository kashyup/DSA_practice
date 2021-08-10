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
    return temp;

}
void print(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<(curr->data)<<" ";
        curr=curr->next;
    }
}
 int main(){
     Node *head=NULL;
     insertBegin(head,10);
     insertBegin(head,20);
     insertBegin(head,30);
     print(head);
}