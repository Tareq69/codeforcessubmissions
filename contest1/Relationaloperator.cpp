#include<iostream>
using namespace std;

int main(){
  int t;
  cin>>t;
  int x,y;
  while(t--){
    cin>>x>>y;
      if(x>y){
        cout<<">"<<endl;
      }
      else if(x<y){
        cout<<"<"<<endl;
      }
      else{
        cout<<"="<<endl;
      }
      }
  }
