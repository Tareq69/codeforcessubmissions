#include <iostream>
#include <map>
#include <functional>
using namespace std;

int main(){
  map<string, int> m;
    m["a"] = 5;
    m["b"] = 10;
    m.insert(pair<string, int>("c", 40));
    for(auto &el1: m){
      cout<<el1.first <<" "<<el1.second <<endl;
    }
}

// for(auto&x:m)
//   {
//       cout<<x.first<<" "<<x.second<<endl;
//   }
