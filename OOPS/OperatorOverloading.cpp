//operator overloading//
#include<bits/stdc++.h>
using namespace std;
class fraction{
    private:
    int num;
    int denom;
    public:
    fraction(int num,int denom){
        this->num=num;
        this->denom=denom;
    }
    void print(){
        cout<<this->num<<" / "<<this->denom<<endl;
    }
   void simplify(){
       int gcd=1;
       int j=min(this->num,this->denom);
       for(int i=1;i<=j;i++){
           if(this->num%i==0&&this->denom%i==0){
               gcd=i;
           }
       }
       this->num=this->num/gcd;
       this->denom=this->denom/gcd;

   }

    fraction add(fraction const &f2){
        int lcm=denom*f2.denom;
        int x=lcm/denom;
        int y=lcm/f2.denom;
        int number=x*num+(y*f2.num);
       // num=number;
       // denom=lcm;
        fraction fNew(number,lcm);
      fNew.simplify();
      return fNew;

    }
    fraction operator+(fraction const &f2)const{
        int lcm=denom*f2.denom;
        int x=lcm/denom;
        int y=lcm/f2.denom;
        int number=x*num+(y*f2.num);
       // num=number;
       // denom=lcm;
        fraction fNew(number,lcm);
      fNew.simplify();
      return fNew;

    }
    void multiply(fraction const &f2){
        this->num=num*f2.num;
        this->denom=denom*f2.denom;
       simplify();

    }
    fraction operator*(fraction const &f2)const{
        int n=num*f2.num;
        int d=denom*f2.denom;
        fraction fNew(n,d);
        fNew.simplify();
        return fNew;
    }
    bool operator==(fraction const &f2)const{
        return (num==f2.num&&denom==f2.denom);
        
    }
    //pre increment//
    void operator++(){
        num=num+denom;
        simplify();
      
    }
};
int main(){
    fraction f1(10,2);
    fraction f2(15,4);
    fraction f3=f1.add(f2);
    fraction f4=f1+f2;
    f1.print();
    f2.print();
    f3.print();
    f4.print();
    fraction f5=f1*f2;
    f5.print();
    if(f1==f2){
        cout<<"equal"<<endl;
    }
    else{
        cout<<"not equal"<<endl;
    }



}