#include<iostream>
using namespace std;

int main(){
   long long int num,t1=0,f,l;
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
      cin>>num;
      t1=num;
      l = num%10;
      while(t1 >= 10){
        t1 = t1/10;
      }
      cout<<t1+l<<endl;
    }
}
