#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int x;
  long long int k;
  long long int t;
  int c = 0;
  cin>>t;
  cin>>k;
  while(t--){
      cin>>x;
      if(x%k == 0){
        c++;
      }
  }
    printf("%d",c);
}
