#include<bits/stdc++.h>
using namespace std;

int main(){

int r=0;
int t,t1;
cin>>t>>t1;
if(t%t1==0){
  r = t/t1;
}
else
r = (t/t1)+1;
cout<<r<<endl;
}
