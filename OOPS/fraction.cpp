//creating fraction classs
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

    void add(fraction const &f2){
        int lcm=denom*f2.denom;
        int x=lcm/denom;
        int y=lcm/f2.denom;
        int number=x*num+(y*f2.num);
        num=number;
        denom=lcm;
      simplify();

    }
    void multiply(fraction const &f2){
        this->num=num*f2.num;
        this->denom=denom*f2.denom;
       simplify();

    }
};
int main(){
    fraction f1(10,2);
    fraction f2(15,4);
    f1.add(f2);


    f1.print();
    f2.print();
    f1.multiply(f2);
    f1.print();
    f2.print();

}