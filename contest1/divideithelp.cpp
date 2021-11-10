#include <bits/stdc++.h>
using namespace std;
int main(){

  int num;
  int c=0,c1=0,c2=0;
  cin>>num;
  if(num%2==0){
    while(num!=1){
      num = num/2;
      c +=1;
    }
  }
  else if(num%5==0){
    while(num!=1){
      num = (4*num)/5;
      c1 +=1;
    }
  }
  else if(num%3==0){
    while(num!=1){
      num = (2*num)/3;
      c2 +=1;
    }
  }
cout<<c<<endl;
cout<<c1<<endl;
cout<<c2<<endl;




}
