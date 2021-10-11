#include<bits/stdc++.h>
using namespace std;

int main(){

  int t;
  int l;
  int c=0,c1=0;
  char s[50];
  cin>>t;
  while(t--){
      cin>>l;
    for(int i=0;i<l;i++){
      cin>>s[i];
    if(s[i]==s[i+1]){
        c++;
    }
    else{
      c1++;
    }
  }
  if(c>0&&c1>0){
    cout<<"YES"<<endl;
  }
  else
  cout<<"NO"<<endl;
}

}
