#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,k,c=0;
  int arr[100];
  cin>>n;
  cin>>k;
  for(int i=1;i<=n;i++){
    cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
      if(arr[i]>=arr[k] && arr[i]> 0){
              c++;
      }
  }
    cout<<c<<endl;
}
