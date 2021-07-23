#include<bits/stdc++.h>
using namespace std;
class student{
 int age;
 public:
 char *name;
 public:
 student(int age, char *name){
     this->age=age;
     //shallow copy
     //this->name=name;
     this->name=new char[strlen(name)+1];
     strcpy(this->name,name);

 }
 //copy constructor//
  student(student const &s){
      this->age=s.age;
      this->name=new char[strlen(name)+1];
      strcpy(this->name,s.name);
  }
 void display(){
     cout<<age<<" "<<name<<endl;
 }

};

int main(){
     char name[]="abcd";
     student s1(20,name);
     s1.display();
     /*name[3]='e';
     student s2(21,name);
     s2.display();
     s1.display();
     */
     
     student s2(s1);
     s2.name[0]= 'x';
     s2.display();
     s1.display();
}