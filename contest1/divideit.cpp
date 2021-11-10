#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int num,count;
    int t;
    cin>>t;
    while(t--){
        cin>>num;
        count=0;
        bool fl=true;
        while(num!=1){
          if(num%5==0){
            num = (num/5)*4;
          }
          else if(num%3==0){
            num = (num/3)*2;
          }
          else if(num%2==0){
            num = num/2;
          }
          else{
            fl = false;
            break;
          }
          count++;
      }
      if(fl)
      cout<<count<<endl;
      else{
          cout<<-1<<endl;
      }
}
  return 0;
}
