#include<bits/stdc++.h>
using namespace std;


int main(){

  string s;
  char c;
  getline(cin,s);
  int len = s.length();

  for(int i=0;i<len;i+=2){
      for(int j=i+2;j<len;j+=2){
          if(s[i]>s[j]){
            c = s[i];
            s[i] = s[j];
            s[j] = c;
          }
      }
  }
  cout<<s<<endl;
}
