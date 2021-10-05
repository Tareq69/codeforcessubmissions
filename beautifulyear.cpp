#include<bits/stdc++.h>
using namespace std;

int byear(int n){

  int num, i, j, r, k = 0, flag = 1;
  int arr[100];
  num = n;
  while (n > 0) {

      r = n % 10;
      arr[k] = r;
      n = n / 10;
      k++;
  }

  for (i = 0; i < k; i++) {
      for (j = i + 1; j < k; j++) {
          if (arr[i] == arr[j]) {
              flag = 0;
          }
      }
  }
  if (flag==1){
    return true;
  }
  else{
    return false;
  }
}

int main(){
  int year;
  cin>>year;
  int fyear = year;
  while(true){
    fyear++;
    if(fyear>year&&byear(fyear)){
      break;
    }
  }
  cout<<fyear<<endl;
}
