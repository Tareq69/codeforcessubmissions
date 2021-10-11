#include<bits/stdc++.h>
using namespace std;

int main(){
string s,s1;
string s3;
getline(cin,s);
getline(cin,s1);
int x = s.length();
int y = s1.length();
int z = max(x,y);
int w = min(x,y);
int t = (z+w)/2;
for(int i=0;i<t+1;i++){
  if(s[i]!='\0'){
        s3.push_back(s[i]);
  }
 if(s1[i]!='\0'){
      s3.push_back(s1[i]);
  }
}
cout<<s3<<endl;
}
