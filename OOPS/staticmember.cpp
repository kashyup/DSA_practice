/*static which belongs to a class*/

#include<bits/stdc++.h>
using namespace std;
class student{
 private:
       static int totalStudents; 

public:
       int rollNumber;
       int age;
       //if we create a object  then it only have rollNumber and age.//
   student(){
       //constructor is called when object is created so  total student count will increase
       totalStudents++;
   }
   int getRollNumber(){
       return rollNumber;
   }
    static  int getTotalstudent(){
        //static function can only access static members
        //static member do not have this -> 
       return totalStudents;
   }

};
int student::totalStudents=0;//intializing static data members.
int main(){
student s1;
cout<<s1.rollNumber<<" "<<s1.age<<endl;
//cout<<s1.totalStudents<<endl this is logically incorrect
//s1.totalStudents=20;
//student s2;
//cout<<" s2 "<<s2.totalStudents<<endl; output will be 20 which is incorrect because we created anothe object

cout<<student::getTotalstudent()<<endl;

}