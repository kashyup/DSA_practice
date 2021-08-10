//find length of linked list recursively
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node *next;
    int data;
    int length=0;
    Node(int d){
        data=d;
        next=NULL;
        
    }
};
int findLength(Node *head){
  
  
  if(head==NULL){
      return 0;
  }
 else{
    return 1+findLength(head->next);
 }


}
int iteLength(Node *head){
    int count=0;
    Node *temp=head;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    return count;
}
int main(){
    Node *head=new Node(10);
    head->next=new Node(30);
    head->next->next=new Node(30);
    int res=findLength(head);
    cout<<res;
    int res2=iteLength(head);
    cout<<res;
    return 0;
}