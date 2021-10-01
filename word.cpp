#include<bits/stdc++.h>
using namespace std;


int main(){

    string s,s2;
    getline(cin,s);
    int c=0;
    int c1=0;
    for(int i=0;s[i]!='\0';i++){
        if(int(s[i])>=65&&int(s[i]<=90)){
          c++;
        }
        else{
          c1++;
        }
    }

    if(c>c1){
      for(int i=0;s[i]!='\0';i++){
        s[i]= toupper(s[i]);
      }
    }
    else{
      for(int i=0;s[i]!='\0';i++){
        s[i]=tolower(s[i]);
      }
    }

    cout<<s<<endl;

}
