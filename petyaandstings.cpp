#include<bits/stdc++.h>
using namespace std;


string toLower(string a){
  for(int i=0;i<a.length();i++){
      a[i] = tolower(a[i]);
  }
  return a;
}

int main(){
    int result;
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    string  s3 = toLower(s1);
    string s4 = toLower(s2);
    if(s3.length()==s4.length()){
    for(int i=0;i<s3.length();i++){
          if(s3[i]<s4[i]){
            result = -1;
            break;
          }
          else if(s4[i]<s3[i]){
              result = 1;
              break;
          }
        else{
          result = 0;
        }
    }
  }
      cout<<result<<endl;
}
