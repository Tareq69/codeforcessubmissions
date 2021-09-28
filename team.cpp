#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    int arr[3];
    int c = 0;
    int sum = 0;
    cin>>n;
    while(n--){
      for (int i=0;i<3;i++){
        cin>>arr[i];
      }
      for (int i=0;i<3;i++){
          if(arr[i]==1){
            c++;
          }
      }
      if(c>1){
        sum++;
      }
      c = 0;
    }
    cout<<sum<<endl;
}
