#include<bits/stdc++.h>
using namespace std;


int main(){
    int c=1;
    string s;
    getline(cin,s);
      for(int i=0;s[i]!='\0';i++){
          if(s[i]==s[i+1]){
            c++;
            if(c==7){
              cout<<"YES"<<endl;
              exit(0);
            }
          }
          c = 0;
        }
    cout<<"NO"<<endl;
}
