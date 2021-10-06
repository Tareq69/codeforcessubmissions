#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int t;
  int arr[100];
  for(int i=1;i<=n;i++){
    cin>>t;
    arr[t] = i;
  }
  for(int i=1;i<=n;i++){
    cout<<arr[i]<<" ";
  }
}
