#include <bits/stdc++.h>
#define Fast ios_base::sync_with_stdio(false), cin.tie(0);
using namespace std;
int main() {
        Fast;
        string s;
        string s1;
        getline(cin,s);
        for(int i=0; i<s.length(); i++) {
                if(s[i]!=s[i+1]) {
                        s1.push_back(s[i]);
                }
        }
        cout<<s1<<endl;
}
