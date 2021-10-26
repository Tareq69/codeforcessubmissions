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
int main() {
        Fast;
        ll n1,n2;
        ll c=-1, c1=0;
        cin>>n1>>n2;
        ll t = n1/2;
        vector<int> v;
        vector<int> v1;
        while(n1>0) {
                if(n1>t) {
                        c+=2;
                        v.push_back(c);
                }
                else{
                        c1+=2;
                        v.push_back(c1);
                }
                n1--;
        }
        // for(int i=0; i<v.size(); i++) {
        //         cout<<v[i]<<endl;
        // }
        cout<<v[n2-1];
        // for(int i=0; i<v1.size(); i++) {
        //         cout<<v1[i]<<endl;
        // }

}
