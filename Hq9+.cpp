#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
      if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
        cout<<"YES";
        exit(0);
      }
}
cout<<"NO"<<endl;
}
