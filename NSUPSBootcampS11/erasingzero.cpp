#include <bits/stdc++.h>
#define Fast ios_base::sync_with_stdio(false), cin.tie(0);
using namespace std;
int main() {
        Fast;
        string s;
        int t,cnt=0,cnt2=0,c=0;
        cin>>t;
        for(int x=0; x<t; x++) {
                cin>>s;
                int len = s.length();
                for(int i=0; i<len; i++) {
                        if(s[i]=='1') {
                                cnt = i;
                                break;
                        }
                }
                for(int j=len; j>=0; j--) {
                        if(s[j]=='1') {

                                cnt2 = j;
                                break;
                        }
                }
                // cout<<cnt<<cnt2<<"\n";
                // if(len==1) {
                //         c = 0;
                // }
                // cout<<cnt<<cnt2<<"\n";
                for(int i=cnt; i<cnt2; i++) {
                        if(s[i]=='0') {
                                c++;
                        }
                        else{
                                c+=0;
                        }
                }

                cout<<c<<"\n";
                cnt = 0;
                cnt2 = 0;
                c = 0;
        }
}
