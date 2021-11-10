#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int a,b,c;
    while(t--){
      cin>>a;
      cin>>b;
      cin>>c;
      if(a+b+c==180){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
}
