#include <bits/stdc++.h>
#define Fast ios_base::sync_with_stdio(false), cin.tie(0);
using namespace std;

int is_small(string s){
        int flag = 0;
        for (int i=0; i<s.size(); i++) {
                for(int j=i; j<s.size(); j++) {
                        if(int(s[i])>int(s[j])) {
                                flag = 1;
                                break;
                        }
                }
        }
        return flag;
}

int is_big(string s){
        int flag = 0;
        for (int i=0; i<s.size(); i++) {
                for(int j=i; j<s.size(); j++) {
                        if(int(s[i])<int(s[j])) {
                                flag = 1;
                                break;
                        }
                }
        }
        return flag;
}


int main() {
        Fast;
        string s;
        cin>>s;
        char c,c1;
        string s1 = s;
        int l = s.size()-1;
        while(true) {
                if(is_small(s)!= 0) {
                        c = s[0];
                        s[0] = s[l];
                        s[l] = c;
                }
        }
        while(true) {
                if(is_big(s1)!= 0) {
                        c1 = s1[0];
                        s1[0] = s1[l];
                        s1[l] = c1;
                }
        }
        cout<<s<<"\n";
        cout<<s1<<"\n";

}
