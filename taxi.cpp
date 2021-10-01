#include<bits/stdc++.h>
using namespace std;


int main(){

  int n;
  int c=0;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  for(int i=0;i<n;i++){
      if(arr[i]%4==0){
        arr[i]=arr[i+1];
        c++;
      }
  }
  for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
          cout<<arr[i];
  }

// cout<<c<<endl;


}
