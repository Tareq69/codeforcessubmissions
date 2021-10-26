#include <bits/stdc++.h>
#define Fast ios_base::sync_with_stdio(false), cin.tie(0);
using namespace std;
int main() {
        Fast;
        string s;
        string s1;
        int c=0;
        cin>>s>>s1;
        int l1 = s.length()-1;
        int l2 = s1.length()-1;

        for(int i=l1,j=l2; i>-1 && j>-1; i--,j--) {
                if(s[i]==s1[j]) {
                        c++;
                }
                else{
                        break;
                }
        }

        int r = (s.length()-c) + (s1.length()-c);
        cout<<r<<"\n";
}
