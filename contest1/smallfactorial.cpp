#include<iostream>
using namespace std;
int main(){
    int i,num,fac=1;
    int t;
    cin>>t;
    while(t--){
    cin>>num;
    for(i=1;i<=num;i++){
      fac = fac*i;

    }
    cout<<fac<<endl;
    fac = 1;
}
}
