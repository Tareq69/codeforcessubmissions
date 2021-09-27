#include <bits/stdc++.h>
using namespace std;
int main(){

    int w;
    cin>>w;
    int i;
    bool flag;
    int c = 0;
    int arr[100];
    int j=0;
    int k=0;
    for(int i=2;i<w;i+=2){
          arr[j] = i;
          j++;
          c++;
    }
    int x = 0;
    for(k=0;k<1;k++){
      while(x!=c){
        if(arr[x]*2== w){
          flag = true;
          break;
        }
        else if((arr[x]+arr[x+1])==w){
          flag = true;
          break;
        }
        else{
          flag = false;
        }
        x++;
      }
    }
    if(flag==true)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

}
