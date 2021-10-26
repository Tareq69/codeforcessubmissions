#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
     ll a,b,c;
    cin>>a>>b>>c;
    if(a>=b && a>=c){
        if(a==b && a==c){
            cout<<1<<" "<<1<<" "<<1<<endl;
        }
        else if(a==b && a!=c){
            cout<<1<<" "<<1<<" "<<(a-c+1)<<endl;
        }
        else if(a==c && a!=b){
            cout<<1<<" "<<(a-b+1)<<" "<<1<<endl;
        }
        else{
            cout<<0<<" "<<(a-b+1)<<" "<<(a-c+1)<<endl;
        }
    }
    else if(b>=a && b>=c){
        if(a==b && a==c){
            cout<<1<<" "<<1<<" "<<1<<endl;
        }
        else if(a==b && b!=c){
            cout<<1<<" "<<1<<" "<<(b-c+1)<<endl;
        }
        else if(b==c && a!=b){
            cout<<(b-a+1)<<" "<<1<<" "<<1<<endl;
        }
        else{
            cout<<(b-a+1)<<" "<<0<<" "<<(b-c+1)<<endl;
        }

    }
    else{
        if(a==b && a==c){
            cout<<1<<" "<<1<<" "<<1<<endl;
        }
        else if(a==c && b!=c){
            cout<<1<<" "<<(c-b+1)<<" "<<1<<endl;
        }
        else if(b==c && a!=c){
            cout<<(c-a+1)<<" "<<1<<" "<<1<<endl;
        }
        else{
            cout<<(c-a+1)<<" "<<(c-b+1)<<" "<<0<<endl;
        }
    }
}


int main()
{
    //fuck();
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ll  t;
    cin >> t;
    //scanf("%d", &t);
    //t = 1;
    for (int i = 1; i <= t; i++)
    {
        //cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}
