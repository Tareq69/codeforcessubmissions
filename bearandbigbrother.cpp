#include<bits/stdc++.h>
using namespace std;


int main(){

  int a,b;
  int c=0;
  cin>>a>>b;

  while(b>=a){
    b = 2*b;
    a = 3*a;
    c++;
  }
cout<<c<<endl;
}
