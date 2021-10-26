#include <bits/stdc++.h>
#define Fast ios_base::sync_with_stdio(false), cin.tie(0);
using namespace std;
int main() {
        Fast;
        char t,t1;
        int n;
        int s[100];
        cin>>t>>t1;
        cin>>n;
        n = n%4;
        s['^'] = 0;
        s['>'] = 1;
        s['v'] = 2;
        s['<'] = 3;

        int x = (s[t]-s[t1]+4)%4;
        cout<<x<<"\n";
}
