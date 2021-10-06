#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int t;
    int c=0;
    int arr[100000];
    for(int i=0;i<n;i++){
      cin>>t;
      arr[i]= t;
    }
    for(int i=0;i<n;i++){
      if(arr[i]!=arr[i+1]){
          c++;
      }
    }
cout<<c<<endl;
}
