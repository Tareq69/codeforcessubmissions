#include<iostream>
using namespace std;
int main(){
    long long int x1,x2,gcd,lcm,rem,num1,num2;
    int t;
    cin>>t;
    while(t--){
    cin>>num1>>num2;
    x1 = num1;
    x2 = num2;
    while(n2!=0){
      rem = n1%n2;
      x1 = n2;
      x2= rem;
    }
    gcd = x1;
    lcm = (num1*num2)/gcd;
    cout<<gcd<<" "<<lcm<<endl;
}
}
