#include <stdint.h>
#include<iostream>
using namespace std;
int32_t my_32bit_int;

int main(){
    int t;
    cin>>t;
    int32_t x1,x2,x3;
    while(t--){
        cin>>x1>>x2>>x3;
        if(x1==x2&& x1==x3 && x2==x3){
          cout<<"Case "<<t<<":"<<" "<<"Equilateral"<<endl;
        }
        else if(x1+x2>x3 && x2+x3>x1){
          if(x1!=x2 && x1!=x3 && x2!=x3)
          cout<<"Case "<<t<<":"<<" "<<"Scalene"<<endl;
        }
        else if(x1+x2>x3 && x2+x3>x1){
          if((x1==x2||x2==x3||x1==x3))
              cout<<"Case "<<t<<":"<<" "<<"isosceles"<<endl;
        }
        else{
          cout<<"Case "<<t<<":"<<" "<<"Invalid"<<endl;
      }
        }
    }
