#include<bits/stdc++.h>
using namespace std;


int main(){

  string s;
  char s1;
  int n,l;
  int t=0;
  int c=0;
  cin>>l;
  cin>>n;
  getchar();
  getline(cin,s);
    for(int j=0;j<n;j++){
        while(t<=l){
          if(s[t]=='G' && s[t+1]=='G'){
                  t++;
                  continue;
             }
             else if(s[t]=='B' && s[t+1]=='G'){
                   s1 = s[t];
                   s[t] = s[t+1];
                   s[t+1] = s1;
                   t++;
             }
        }
    }
  cout<<s<<endl;
  cout<<t<<endl;
}
