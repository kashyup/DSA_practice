#include<bits/stdc++.h>
using namespace std;
class ComplexNumbers{
    private:
    int real;
    int imag;
    public:
    ComplexNumbers(int a,int b){
        real=a;
        imag=b;
    }
    void add(ComplexNumbers const &n2){
        real=real+n2.real;
        imag=imag+n2.imag;
    }
    void print(){
      cout<<real<<" +i"<<imag<<endl;
    }
  void multiply(ComplexNumbers const n2){
         int temp=real;
         real = (real*n2.real)-(imag*n2.imag);
         imag =temp*n2.imag+imag*n2.real;
  }

};
int main(){
    ComplexNumbers n1(10,5);
    ComplexNumbers n2(10,5);
    n1.add(n2);
    n1.print();
}
