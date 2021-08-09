//recursive display of linked list
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    Node *next;
     int data;
       Node(int x){
            data=x;
            next=NULL;
        }
};
void recPrint(Node *head){
    if(head==NULL){
        return;
    }
    cout<<(head->data)<<" ";
    recPrint(head->next);

}
int main(){
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    recPrint(head);
    return 0;
}