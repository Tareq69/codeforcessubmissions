#include<bits/stdc++.h>
using namespace std;


int main(){
  string s,s1,s2;
  getline(cin,s);
  getline(cin,s1);
  int len = s.length()-1;
  for(int i=len;i>=0;i--){
      s2.push_back(s[i]);
  }
  if(s1==s2){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
}
