#include<bits/stdc++.h>
using namespace std;

int len(long long int x){
  return to_string(x).length();
}

int removeleading(int n){
  int n,temp,temp1,sum1=0,n3,n2,sum=0;
  cin>>n;
  while(n!=0){
    temp = n%10;
    sum = sum*10+temp;
    n = n/10;
    n2 = sum;
  }
  while(n2!=0){
    temp1 = n2%10;
    sum1 = sum1*10+temp1;
    n2 = n2/10;
    n3 = sum1;
  }
  return n3;
}
