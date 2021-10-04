#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin>>n;
    int x,y;
    int p=0;
    int r = 0;
    int arr[1000];
    int max = 0;
    for(int i=0;i<n;i++){
      cin>>x>>y;
      p = x+y;
      if(i==0){
        r = p;
        arr[i]=r;
      }
      else if(i>0&&i<n-1){
          r = (r-x)+y;
          arr[i] = r;
      }
    }

  max = arr[0];
  for(int i=0;i<n-1;i++){
      if(max<arr[i]){
        max = arr[i];
      }
  }

  cout<<max<<endl;
}
