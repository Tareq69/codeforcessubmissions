#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,sum1=0,sum2=0;
  int arr[100];
  string str;
  bool flag = false;
  cin>>n;
  getchar();
  getline(cin,str);
  for(int i=0;i<n;i++){
      arr[i] = int(str[i]) - 48;
  }
  for(int i=0;i<n/2;i++){
      if(arr[i]!=4 && arr[i]!=7){
          flag = true;
          break;
      }
      else{
            sum1+= arr[i];
      }
  }
  for(int i=n/2;i<n;i++){
      if(arr[i]!=4 && arr[i]!=7){
          flag = true;
          break;
      }
      else{
            sum2+= arr[i];
      }
  }

  if(flag==false && sum1==sum2){
      cout<<"YES"<<endl;
  }
  else
  cout<<"NO"<<endl;

}
