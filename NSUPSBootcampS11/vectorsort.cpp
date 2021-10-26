#include <bits/stdc++.h>
#define Fast ios_base::sync_with_stdio(false), cin.tie(0);
using namespace std;
int main() {
        Fast;
        vector<int> v;
        int n;
        cin>>n;
        int x;
        for(int i=0; i<n; i++) {
                cin>>x;
                v.push_back(x);
        }

        sort(v.begin(),v.end());
        for(auto it=v.begin(); it!=v.end(); ++it) {
                cout<<*it<<" ";
        }
}
