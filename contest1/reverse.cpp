#include<iostream>
using namespace std;
int main(){
    long long int num,temp,r,rev=0;
    int t;
    cin>>t;
    while(t--){
    cin>>num;
    temp = num;
    while(temp!=0){
      r = temp%10;
      rev = rev*10+r;
      temp = temp/10;
    }
    cout<<rev<<endl;
    rev = 0;
}
}
