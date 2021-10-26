#include<bits/stdc++.h>
using namespace std;


int main(){

  long long int n,i,t,r;
   cin>>n;
  if(n%2==0){
    cout<< n/2 <<endl;
    exit(0);
  }
  else{
    if(n==1){
      cout<<-1<<endl;
      exit(0);
    }
    else if(n==3){
      cout<<2<<endl;
      exit(0);
    }
    else{
      cout<<(n+1)/-2<<endl;
      exit(0);

    }
  }
}
