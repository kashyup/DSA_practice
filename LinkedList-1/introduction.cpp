#include<bits/stdc++.h>
using namespace std;
class Node{
public:
int data;
Node *next;
Node(int data){
    this->data=data;
    next=NULL;
}

};
void print(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
  //statically
  /*
  Node N1(1);
  Node* head=&N1;
  Node N2(2);
  N1.next=&N2;
 //cout<<N1.data<<" "<<N2.data<<endl;  op: 1 2

 //cout<<head->data;   op:1;
 //daynamically creating a linked list
 Node *N3=new Node(10);
 Node *head=N3;
 Node *N4=new Node(20);
 N3->next=N4;*/
 


 //creating a linked list with 5 nodes
 Node  n1(1);
 Node *head= &n1;
 Node  n2(2);
 Node  n3(3);
 Node  n4(4);
 Node  n5(5);
 n1.next=&n2;
 n2.next=&n3;
 n3.next=&n4;
 n4.next=&n5;
 print(head); 



}