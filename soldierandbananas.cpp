#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int k,w,n;
    cin>>k>>w>>n;
    long long int sum = 0;
    for(long long int i=1;i<=n;i++){
        sum = sum + (k*i);
    }
    long long int r = sum - w;
    if(sum>w){
      cout<<r<<endl;
    }
    else{
      cout<<0<<endl;
    }
}
