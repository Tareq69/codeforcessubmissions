#include<bits/stdc++.h>
#include <string>
#include<iterator>
using namespace std;

int main(){
    map<string, string> m;
    map <string , string> :: iterator it;
    int t,n;
    cin>>t;
    getchar();
    string s1,s2;
    for(int i=0;i<t;i++){
      getline(cin, s1);
      getline(cin, s2);
      m[s1]= s2;
    }
    cin>>n;
    getchar();
    for(int i=0;i<n;i++){
      getline(cin, s2);
      for(it=m.begin(); it!=m.end(); ++it){
        if(it->first == s2){
          cout<< it->second <<endl;
          break;
        }
        else if(it->second == s2){
          cout<< it->first <<endl;
          break;
        }
      }

    }
    // for(it=m.begin(); it!=m.end(); ++it){
    //   cout<< it->first <<" "<< it->second <<endl;
    // }
}
