#include <bits/stdc++.h>
#define Fast ios_base::sync_with_stdio(false), cin.tie(0);
using namespace std;


int main() {
        Fast;

        string s;
        getline(cin,s);
        string s1;
        int cnt=0,cnt1=0,cnt2=0,cnt3=0;
        for(int i=0; i<s.size(); i++) {
                if(s[i]=='h') {
                        cnt = i;
                        s1.push_back('h');
                        break;
                }

        }
        int len = s.size();
        for(int j=cnt; j<len; j++) {
                if(s[j]=='e') {
                        cnt1 = j;
                        s1.push_back('e');
                        break;
                }
        }

        for(int j=cnt1; j<len; j++) {
                if(s[j]=='i') {
                        cnt2 = j;
                        s1.push_back('i');
                        break;
                }
        }
        for(int j=cnt2; j<len; j++) {
                if(s[j]=='d') {
                        cnt3 = j;
                        s1.push_back('d');
                        break;
                }
        }
        for(int j=cnt3; j<len; j++) {
                if(s[j]=='i') {
                        s1.push_back('i');
                        break;
                }
        }
        // cout<<s1<<"\n";
// int len = s.size();
        if(len>5 && s1=="heidi")
                cout<<"YES"<<"\n";
        else
                cout<<"NO"<<"\n";
}
