#include<bits\stdc++.h>
using namespace std;

int lucky(long long int x){
   long long int len = to_string(x).length();
   long long int z=0;
    while(x!=0){
        long long int p = x%10;
        x = x/10;
        if(p==4||p==7){
            z++;
        }
    }
    if(z==len){
      return 1;
    }
    else{
      return 0;
    }
}
int main(){
    long long int n;
    long long int t,c=0;
    cin>>n;
    while(n!=0){
        t = n%10;
        n = n/10;
        if(t==4||t==7){
            c++;
        }
    }
long long int a = lucky(c);
if(a==1){
    cout<<"YES"<<endl;
}
else{
  cout<<"NO"<<endl;
}
}
