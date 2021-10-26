#include <bits/stdc++.h>
#define Fast ios_base::sync_with_stdio(false), cin.tie(0);
using namespace std;
int main() {
        Fast;
        int t=0;
        string s;
        char c;
        int n;
        cin>>n;
        while(t<10000) {
                t++;
                string x = to_string(t);
                s+= x;
        }
        // cout<<s<<"\n";
        int len = s.length();
        for(int i=0; i<len; i++) {
                c = s[n-1];
        }
        cout<<c<<"\n";
}
