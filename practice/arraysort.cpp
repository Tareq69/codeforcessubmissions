#include<bits/stdc++.h>
using namespace std;


int main(){

    int temp;
    int arr[100];

    for(int i=0;i<5;i++){
      cin>>arr[i];
    }

    for(int j=0;j<5;j++){
      for(int i=j+1;i<5;i++){
        if(arr[j]>arr[i]){
           temp = arr[j];
          arr[j] = arr[i];
          arr[i] = temp;
        }
          cout<<arr[i]<<" ";
      }
      cout<<" "<<endl;
        cout<<arr[j]<<" ";
        // cout<<" "<<temp;
        // cout<<" "<<endl;;
      }
      cout<<" "<<endl;;
for(int i=0;i<5;i++){
  cout<<arr[i]<<" ";
}

}
