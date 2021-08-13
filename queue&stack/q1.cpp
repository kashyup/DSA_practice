//stack using array
#include<bits/stdc++.h>
using namespace std;
class StackUsingArray{
  int *data;
  int nextIndex;
  int capacity;
  public:
  StackUsingArray(){
      data=new int[4];
      nextIndex=0;
      capacity=4;
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
     /*if(nextIndex==capacity){
         cout<<"Stack Full "<<endl;
         return;
     }*/
     if(nextIndex==capacity){
         int *neData=new int[2*capacity];
         for(int i=0;i<capacity;i++){
             neData[i]=data[i];
         }
         capacity *=2;
         delete [] data;
         data=neData;
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
    StackUsingArray s1;
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