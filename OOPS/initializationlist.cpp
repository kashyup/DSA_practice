//constant variables and refrence variable needs to be initialized at the time of creation so we use initilization list in this case//


#include<bits/stdc++.h>
using namespace std;\
class student{
public:
int age;
int const rollNumber;
int &x;
student(int r,int age):rollNumber(r),age(age),x(this->age){

}
void display(){
    cout<<rollNumber<<" "<<age;
}
};
int main(){
student s1(100,23);
s1.display();

}