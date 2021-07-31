#include<bits/stdc++.h>
using namespace std;
bool isPallindrome(int x){
    if(x<0){
        return false;
    }
    int temp=x;
    int rev=0;
    while(x!=0){
        int lastdigit=x%10;
        
        rev=rev*10+lastdigit;
          x=x/10;

    }
    
    if(rev==temp){
        return true;
    }
    else{
        return false;
    }

}
int main(){
    int x;
    cin>>x;
    bool res=isPallindrome(x);
    cout<< res;
}