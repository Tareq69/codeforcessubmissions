#include<bits/stdc++.h>
using namespace std;




int main(){

  long long int t;
  cin>>t;
  long long int n1,n2,n3;
  long long int r1,r2,r3;
  while(t--){
    cin>>n1>>n2>>n3;
    if(n1==0 && n2==0 && n3==0){
        r1= 1;
        r2 = 1;
        r3 = 1;
    }
    else if(n1==n2 && n2==n3){
        r1= 1;
        r2 = 1;
        r3 = 1;
    }
    else if(n1==n2 && n3==0){
        r1= 1;
        r2 = 1;
        r3 = n1+1;
    }
    else if(n1==n3 && n2==0){
        r1= 1;
        r2 = n1+1;
        r3 = 1;
    }
    else if(n2==n3 && n1==0){
        r1= n2+1;
        r2 = 1;
        r3 = 1;
    }
    else if(n1<n2||n1<n3){
      if(n2!=0||n3!=0){
        r1 = max(n2,n3)-n1+1;
        if(n2>n3){
            r2 = 0;
            r3 = max(n2,n3)-n3+1;
        }
      else if(n2<n3){
        r3 = 0;
        r2 = max(n2,n3)-n2+1;
      }
      else if(n2==n3){
          r1 =  n2 +1 ;
          r2 =  n2;
          r3 =  n2;
      }
      else{
        r1 = 0;
      }
    }
  }
    else if(n2<n1||n2<n3){
      if(n1!=0||n3!=0){
        r2 = max(n1,n3)-n2+1;
        if(n1>n3){
            r1 = 0;
            r3 = max(n1,n3)-n3+1;
        }
      else if(n1<n3){
        r3 = 0;
        r1 = max(n1,n3)-n1+1;
      }
      else if(n1==n3){
          r1 =  n1;
          r2 =  n1 +1 ;
          r3 =  n1;
      }
      else{
        r2 = 0;
      }
    }
  }
    else if(n3<n1||n3<n2){
      if(n2!=0||n1!=0){
        r3 = max(n2,n1)-n1+1;
        if(n2>n1){
            r2 = 0;
            r1 = max(n2,n1)-n1+1;
        }
      else if(n2<n1){
        r1 = 0;
        r2 = max(n2,n1)-n2+1;
      }
      else if(n2==n1){
          r1 =  n2;
          r2 =  n2;
          r3 =  n2 +1 ;
      }
      else{
        r3 = 0;
      }
    }
  }
  cout<<r1<<" "<<r2<<" "<<r3<<endl;
}
}
