#include<bits/stdc++.h>
using namespace std;

int main(){

  string s;
  string s1;
  getline(cin,s);
  int t = s.length();
  for(int i=2;i>=0;i--){
    s1.push_back(s[i]);
  }
cout<<s1<<endl;
}
