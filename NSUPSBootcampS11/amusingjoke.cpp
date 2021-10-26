#include <bits/stdc++.h>
#define Fast ios_base::sync_with_stdio(false), cin.tie(0);
using namespace std;
int main() {
        Fast;
        string s,s1,s2,s3;
        cin>>s>>s1>>s2;

        s3 = s + s1;
        // cout<<s3<<"\n";
        sort(s3.begin(),s3.end());
        sort(s2.begin(),s2.end());
        // cout<<s2<<"\n";
        // cout<<s3<<"\n";
        if(s2==s3)
                cout<<"YES"<<'\n';
        else
                cout<<"NO"<<"\n";


}
