#define _CRT_SECURE_NO_WARNINGS

/***from dust i have come, dust i will be***/

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 100010
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s\n",s)

#define pb(n) push_back(n)

using namespace std;
#define Fast ios_base::sync_with_stdio(false), cin.tie(0);

// int isSome(int n){
//         return n;
// }

int main() {
        Fast;
        int a,b,temp;
        sf(a);
        int x;
        vector<int> v;
        while(a--) {
                sf(b);
                for(int i=0; i<b; i++) {
                        sf(x);
                        v.push_back(x);
                }
                for(int i=1,j=i+1; i<=v.size() && j<=v.size(); i++,j++) {
                        int t = v[i];
                        int p = v[j];
                        int y = abs(t-p);
                        int z = min(t,p);
                        int k;
                        if(z==t) {
                                k = i;
                        }
                        else{
                                k = j;
                        }
                        if(y<=1) {
                                v.erase(v.begin()+k);
                                i=0;
                                j=1;

                        }
                        else{
                                continue;
                        }
                }
                // for(int i=0; i<v.size(); i++) {
                //         cout<<v[i]<<" ";
                // }
                if(v.size()== 1) {
                        cout<<"YES"<<endl;
                }
                else
                        cout<<"NO"<<"\n";
                v.clear();
        }


}
