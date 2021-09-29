#include<bits/stdc++.h>
using namespace std;

int main(){
    int j=0;
    string s,s1,s2;
    getline(cin,s);
    if(s.length()==1){
        cout<<s<<endl;
        exit(0);
    }
    for(int i=0;s[i]!='\0';i++){
        if(s[i]!='+'){
            s1.push_back(s[i]);
        }
    }
    sort(s1.begin(),s1.end()); // sorting the string
    int i,t=0;
    int n = s1.length();
    for(i=0;i<n;i++){
        s2.push_back(s1[t]);
        if(i==n-1){
          break;
        }
        s2.push_back('+');
        t+=1;
    }
    cout<<s2<<endl;
}
