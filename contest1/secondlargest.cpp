#include<iostream>
using namespace std;
int main(){
  int x,y,z;
  int smax;
  int t;
  cin>>t;
  while(t--){
  cin>>x>>y>>z;
  if((x>y&&x<z)||(x<y&&x>z)){
    smax = x;
  }
  else if((y>x&&y<z)||(y<x&&y>z)){
    smax = y;
  }
  else{
    smax = z;
  }
cout<<smax<<endl;
}
}
