#define _CRT_SECURE_NO_WARNINGS
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
        int a,b;
        int sum=0,x,y,min,z;
        sff(a,b);
        vector <int> v;
        for(int i=1; i<=a; i++) {
                cin>>x;
                v.push_back(x);
        }
        for(int i=0; i<v.size(); i++) {
                sum+= v[i];
        }
        // cout<<sum<<endl;
        if(sum==b) {
                cout<<v.size()<<"\n";
                return 0;
        }
        else{
                y = b - sum;
                min = *min_element(v.begin(), v.end());
                z = y/min;
        }
        cout<<v.size()+z<<"\n";
}
