#include<bits/stdc++.h>
using namespace std;


int main(){

     long long int x,y;
     cin>>x>>y;
     long long temp = x;
     for(int i=1;i<=y;i++){
        long long t = temp%10;
        if(t==0){
          x/=10;
        }
        else{
          x-=1;
        }
        temp = x;
     }
     cout<<x<<endl;

}
