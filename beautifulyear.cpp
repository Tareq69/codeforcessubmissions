#include<bits/stdc++.h>
using namespace std;

int byear(int n){
  bool flag = false;
  string s = to_string(n);
    for(int i=0;i<s;length();i++){
      while(t<=3){
        if(s[i]!=s[t+1]){
            flag = true;
        }
      }
    }
}

int main(){
  int year;
  cin>>year;
  if(byear(year)){
      cout<<"It's a beautiful year";
  }
  else
  cout<<"Nehh"<<endl;
}
