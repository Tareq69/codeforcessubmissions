#include <bits/stdc++.h>
#define Fast ios_base::sync_with_stdio(false), cin.tie(0);
using namespace std;
int main() {
        Fast;
        vector<int> v;
        int t,n,c=0,sum=0;
        bool flag = false;
        int x;
        cin>>t;
        while(t--) {
                cin>>n;
                for(int i=0; i<n; i++) {
                        cin>>x;
                        v.push_back(x);
                }
                for(int i=0; i<v.size(); i++) {
                        for(int j=i+1; j<v.size(); j++) {
                                if(v[i]>v[j]) {
                                        c++;
                                }
                                if(c>2) {
                                        flag = true;
                                        break;
                                }
                        }
                        sum+= c;
                        c = 0;

                }
                if(flag==true) {
                        cout<<"Too chaotic"<<"\n";
                }
                else
                        cout<<sum<<"\n";
                sum = 0;
                flag = false;
                c = 0;
                v.clear();
        }
}
