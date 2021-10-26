#include <bits/stdc++.h>
#define Fast ios_base::sync_with_stdio(false), cin.tie(0);
using namespace std;
int main() {
        Fast;
        int n,i;
        string s;
        int len = s.length(), ans = n;
        while(cin >> n >> s) {
                if(s.substr(0, i) == s.substr(i, i))
                {
                        for(int i = 1; i <= len/2; i++) {
                                ans = n - i + 1;
                        }
                }
        }
        printf("%d\n", ans);

}
