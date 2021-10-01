#include<bits/stdc++.h>
using namespace std;


int main(){

  int n,r;
  cin>>n;

  for(int i=1;i<=5;i++){
      if(n==i){
        r = 1;
        cout<<r<<endl;
        exit(0);
      }
  }
  if(n%5==0){
    r = n/5;
  }
  else{
    r = (n/5)+1;
  }
cout<<r<<endl;

}
