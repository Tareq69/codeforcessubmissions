#include<bits/stdc++.h>
using namespace std;

int main(){

  int x,y,z,s1,s2;
  int maxx=0;
  while(true){
      cin>>x>>y>>z;
    if(x==0 && y==0 && z==0){
    return 0;
    }
    else{
      if(x<max(y,z)){
        maxx = max(y,z);
        s1 = x;
        s2 = min(y,z);
      }
      else if(y<max(x,z)){
        maxx = max(x,z);
        s1 = y;
        s2 = min(x,z);
      }
      else{
        maxx = x;
        s1 = y;
        s2 = z;
      }

    int s3 = pow(s1,2)+pow(s2,2);
    int s4 = maxx*maxx;
    if(s3==s4){
      cout<<"right"<<endl;
    }
    else
    cout<<"wrong"<<endl;
    }
  }
}
