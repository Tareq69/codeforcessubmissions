#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n,s,min,min1,res;
    cin>>t;
    while(t--){
      cin>>n;
      int arr[n];
    for(int i=0;i<n;i++){
          cin>>arr[i];
    }
    sort(arr, arr+n);
    min = arr[0];
    min1 = arr[1];
    res = min + min1;
    cout<<res<<endl;
}
}
