#include<bits/stdc++.h>
using namespace std;

int sumofdigits(int x){
    int sum=0;
    while(x!=0){
        int temp = x%10;
        sum+= temp;
        x = x/10;
    }
    return sum;
}

int main(){
  int x,t=19,count=0;
  cin>>x;
  while(t>0){
    if(sumofdigits(t)==10){
      count++;
    }
    if(count==x){
      break;
    }
    t++;
  }
  cout<<t<<endl;
}
