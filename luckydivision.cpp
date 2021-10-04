#include<bits\stdc++.h>
using namespace std;


int lucky(int x){
    int len = to_string(x).length();
    int z=0;
    while(x!=0){
         int p = x%10;
        x = x/10;
        if(p==4||p==7){
            z++;
        }
    }
    if(z==len){
      return true;
    }
    else{
      return false;
    }
}

int main(){
  int arr[1000];
  int arr1[14];
  for(int i=0;i<1000;i++){
        arr[i]=i;
    }
    int c=0;
    for(int i=0;i<1000;i++){
      if(lucky(arr[i])){
        arr1[c]=arr[i];
      }
      else{
        continue;
      }
      c++;
  }
  int n;
  cin>>n;
  int t = lucky(n);
  if(t==1){
    cout<<"YES"<<endl;
    exit(0);
  }
    for(int i=0;i<14;i++){
      if(n%arr1[i]==0){
        cout<<"YES"<<endl;
        exit(0);
      }
    }
    cout<<"NO"<<endl;
}
