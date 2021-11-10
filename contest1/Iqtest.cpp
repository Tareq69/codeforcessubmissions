#include<iostream>
using namespace std;


int main(){
  int t,c1=0,c2=0,c3=0;
  int arr[100];
  cin>>t;

  for(int i=0;i<t;i++){
    cin>>arr[i];
  }
  for(int i=0;i<t;i++){
    if (arr[i]%2==0){
      c1++;
    }
    else{
      c2++;
    }
  }

  if(c1>c2){
    for(int i=0;i<t;i++){
      if(arr[i]%2!=0){
        c3 = i+1;
        break;
      }
    }
  }
    else{
      for(int i=0;i<t;i++){
        if(arr[i]%2==0){
          c3 = i+1;
          break;
        }
      }
    }
cout<<c3<<endl;
}
