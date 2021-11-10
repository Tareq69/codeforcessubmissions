#include<iostream>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int c1,c2,c3,x,y,result;
    c1 = (k*l)/nl;
    c2 = c*d;
    c3 = p/np;
    x = min(c1,c2);
    y = min(x,c3);
    result = y/n;
    cout<<result<<endl;
}
