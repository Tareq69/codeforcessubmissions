#include<bits/stdc++.h>
using namespace std;

int gcd(int n, int n1){
  int x;
  int t= max(n,n1);
  for(int i=1;i<t;i++){
    if (n%i==0 && n1%i==0){
      x = i;
    }
  }
  return x;
}
int main(){

  // int t,p=0;
  // cin>>t;
  // int c=0;
  // int x,y;
  // while(t--){
  //   cin>>x>>y;
  //   for(int i=x;i<y;i++){
  //       p = gcd(i,i+1);
  //       if(p==1){
  //         c++;
  //       }
  //   }
  // }
  // cout<<c<<endl;

  int x = 3;
  int y = 4;
  for(int i=0;i<x;i++){

  }
  int r = gcd(x,y);
  cout<<r<<endl;
}
