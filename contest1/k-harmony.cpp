#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    long long int a,b,r,r1,r2;
      cin>>a>>b;
      r = (a+b)/2;
      r1 = abs(a-r);
      r2 = abs(b-r);
      if(r1==r2){
        cout<<r<<endl;
      }
      else{
        cout<<"IMPOSSIBLE"<<endl;
      }
}
