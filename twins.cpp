#include <bits/stdc++.h>
using namespace std;


int main(){
        ios_base::sync_with_stdio(false); cin.tie(0);
        int n,sum=0,c=0;
        cin>>n;
        int x;
        vector <int> v1;
        for(int i=0; i<n; i++) {
                cin>>x;
                v1.push_back(x);
        }
        int len = v1.size();
        sort(v1.begin(), v1.end(), greater<int>());
        for(int i=0; i<len; i++) {
                sum+= v1[i];
        }



}
