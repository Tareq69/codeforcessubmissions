#include <bits/stdc++.h>
#define Fast ios_base::sync_with_stdio(false), cin.tie(0);
using namespace std;

int count_word(string s){
        int cnt = 1;
        for(int i=0; i<s.length(); i++) {
                if(int(s[i])>=65 && int(s[i])<=90) {
                        cnt++;
                }
        }
        return cnt;
}

int main() {
        Fast;
        string s;
        getline(cin,s);
        int count = count_word(s);
        cout<<count<<"\n";
}
