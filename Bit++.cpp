#include<bits/stdc++.h>
using namespace std;

int main(){

    int x=0;
    int t;
    cin>>t;
    getchar();
    string word;
    for(int i=0;i<t;i++){
      getline(cin,word);
      if(word == "++X"){
        x+=1;
      }
      else if( word == "X++"){
        x+=1;
      }
      else if( word == "X--"){
        x-=1;
      }
      else if( word == "--X"){
        x-=1;
      }
    }
    cout<<x<<endl;
  }
