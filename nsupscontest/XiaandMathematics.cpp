#include<bits/stdc++.h>
using namespace std;

int main(){

string s;
getline(cin,s);
int arr[s.length()];
for(int i=0;s[i]!='\0';i++){
    arr[i] = int(s[i])-48;
}
int t= s.length();
for(int i=0;i<s.length();i++){
  if(arr[t-1]%5==0){
    cout<<"YES"<<endl;
    exit(0);
  }
}
  cout<<"NO"<<endl;
}
