#include<iostream>
using namespace std;

int main(){

    int arr[5],x;
    for(int i=0;i<5;i++){
      cin>>arr[i];
    }
    for(int i=0;i<5;i++){
      cout<<arr[i];
    }
    cout<<" ";
    for(int i=0;i<5;i++){
      x = arr[i+1];
      arr[i+1] = arr[i];
      arr[i] = x;
    }
    for(int i=0;i<5;i++){
      cout<<arr[i];
    }
}
