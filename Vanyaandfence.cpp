#include<bits/stdc++.h>
using namespace std;


int main(){

  int n,t;
  int x;
  int c = 0;
  cin>>n>>t;
  for(int i=0;i<n;i++){
    cin>>x;
    if(x<=t){
      c++;
    }
    else{
      c+=2;
    }
  }
  cout<<c<<endl;
}
