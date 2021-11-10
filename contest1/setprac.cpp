#include<bits/stdc++.h>
#include <iterator>
using namespace std;


int main(){

    set<int> s;
    int t;
    cin>>t;
    int x,q;
    for(int i=0;i<t;i++){
        cin>>q;
        if(q==1){
          cin>>x;
          s.insert(x);
        }
        else if(q==2){
          cin>>x;
          s.insert(x);
          s.erase(x);
        }
        else{
          cin>>x;
            set<int>::iterator itr;
            const bool is_in = s.find(x) != s.end();
            if(is_in){
              cout<<"Yes"<<endl;
            }
            else{
              cout<<"No"<<endl;
            }
        }
    }
    }
    // set<int>::iterator itr;
    // for (itr = s.begin(); itr != s.end(); itr++)
    //  {
    //     cout<<q<< " ";
    //      cout << *itr<<" ";
    //  }
    //  cout << endl;
