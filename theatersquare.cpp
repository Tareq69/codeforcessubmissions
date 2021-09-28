#include<bits/stdc++.h>
using namespace std;

int main(){


    long long int m,n,a;
    long long int t1,t2;
    scanf("%lld%lld%lld",&n,&m,&a);
    if(n%a==0){
      t1 = n/a;
    }
    else{
        t1 = (n/a)+1;
    }
    if(m%a==0){
      t2 = m/a;
    }
    else{
        t2 = (m/a)+1;
    }

   printf("%lld\n",t1*t2);

}
