#include<bits/stdc++.h>
using namespace std;
class Student{
public:
int age;
private:
int rollNumber;
public:
void display(){
    cout<<rollNumber<<" "<<age<<endl;
}

int getrollNumber(){
    return rollNumber;
}
void setrollNumber(int a){
    rollNumber=a;
}
 
};
int main(){
    //create object statically

    Student s1;
    s1.age=24;
    //s1.rollNumber=101;
    //s1.rollNumber=101;
    s1.setrollNumber(101);
    cout<<s1.age<<endl;
    cout<<s1.getrollNumber()<<endl;
   // cout<<s1.rollNumber<<endl;
 //creat object dynamically
 Student *s2=new Student();
 (*s2).age=25;//s2->age=23;
   s2->setrollNumber(104);

 //s2->rollNumber()=104;
 // (*s2).rollNumber=104;//s2->rollNumber=104;
 cout<<s2->age<<endl;

 cout<<s2->getrollNumber()<<endl;
  //cout<<s2->rollNumber<<endl;
 return 0;
}