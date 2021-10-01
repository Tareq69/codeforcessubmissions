#include<bits/stdc++.h>
using namespace std;


int main(){

  int n;
  cin>>n;
  int count = 0;
  string s;
  for(int i=0;i<n;i++){
        cin>>s[i];
        s.push_back(s[i]);
  }
  for(int i=0;s[i]!='\0';i++){
    if(s[i]==s[i+1]){
        count++;
    }
  }
  cout<<count<<endl;
}
