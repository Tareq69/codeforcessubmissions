#include<bits/stdc++.h>
using namespace std;

int main(){

  string s;
  string r;
  int c1=0,c2=0;
  getline(cin,s);
  for(int i=0;i<s.length();i++){
        if(s[i]=='0'){
          c1++;
        }
        else{
          c2++;
        }
  }
    if(c1==c2){
      cout<<c1*2<<endl;
    }
    else if(c1<c2){
      cout<<c1*2<<endl;
    }
    else{
      cout<<c2*2<<endl;
    }
}
