//stack using array
#include<bits/stdc++.h>
using namespace std;
class StackUsingArray{
  int *data;
  int nextIndex;
  int capacity;
  public:
  StackUsingArray(int totalSize){
      data=new int[totalSize];
      nextIndex=0;
      capacity=totalSize;
  }
  //for finding out the number of elements in my stack
  //we use index for finding out number or elements
  int size(){
      return nextIndex;
  }
  bool isEmpty(){
      /*if(nextIndex==0){
          return true;
      }
      else{
          return false;
      }*/
      return nextIndex==0;
  }
  //insert element in stack
 void push(int element){
     if(nextIndex==capacity){
         cout<<"Stack Full "<<endl;
         return;
     }
     data[nextIndex]=element;
     nextIndex++;
 }
 //delete element//
 int pop(){
     if(isEmpty()){
         cout<<"Stack is Empty "<<endl;
         return INT_MIN;
     }
     nextIndex--;

     return data[nextIndex];
     
 }
 int top(){
     if(isEmpty()){
         cout<<"Stack is Empty "<<endl;
         return INT_MIN;
     }
     return data[nextIndex-1];
 }

};
int main(){
    StackUsingArray s1(4);
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
 cout<<s1.top()<<endl;
 cout<<s1.pop()<<endl;
 cout<<s1.pop()<<endl;
 cout<<s1.pop()<<endl;
 cout<<s1.size()<<endl;
 cout<<s1.isEmpty()<<endl;


}