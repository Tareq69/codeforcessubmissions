#include<iostream>
using namespace std;

int main(){
    int n,temp;
    int arr[100];
    cin>>n;
    int z = n-1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        temp = arr[z];
        arr[z] = arr[0];
        arr[0] = temp;
        break;
    }
    for(int i=0;i<n;i++){
      cout<<arr[i];
    }
    cout<<" "<<endl;
}
#include<iostream>
using namespace std;

int main(){
    int t;
    int count = 0;
    int count2 = 0;
    cin>>t;
    int arr[t];
    int z = t-1 ;
    int x = 0;
    int y = 0;
    int b = 0;
    int c =0;
    int p = 0;
    int count3 = 0;
    for(int i=0;i<t;i++){
      cin>>arr[i];
    }
    for(int i=0;i<t;i++){
      x +=1;
      if(arr[i]<arr[x]){
        count2 = count2 + 1;
      }
    }
      if(count2==t){
        cout<<"YES"<<endl;
        exit(0);
      }
    for(int i=0;i<t;i++){
        c = i + 1;
      if(arr[i]>arr[z]){
            y = arr[z];
            arr[z] = arr[0];
            arr[0] = y;
            break;
      }
      else
         {
          b = arr[c];
          arr[c] = arr[i];
          arr[i] = b;
          break;
        }
    }
    for(int i=0;i<t;i++){
      p+=1;
      if(arr[i]<arr[p]){
        count3 = count3 + 1;
      }
    }
    if(count3==t){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
    }
