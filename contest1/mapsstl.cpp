#include <iostream>
#include <map>
#include <functional>
#include<string>
using namespace std;

int main(){
  int num;
  cin>>num;
  map<string, int> m;
  for(int i=0;i<num;i++){
  int q=0;
  cin>>q;
  string s;
  if(q==1){
      int v = 0;
      cin>>s;
      cin>>v;
      m[s] += v;
  }
  else if(q==2){
      cin>>s;
      m.erase(s);
  }
  else{
      cin>>s;
      map<string,int>::iterator itr=m.find(s);
           if (itr != m.end())
               cout<<m[s]<<endl;
           else
               cout<<0<<endl;
      }
  }

}
