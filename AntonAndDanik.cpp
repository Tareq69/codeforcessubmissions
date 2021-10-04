#include<iostream>
using namespace std;

int main(){

    string s;
    int c1=0,c2=0;
    int n;
    cin>>n;
    getchar();
    getline(cin,s);
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
          c1++;
        }
        else{
          c2++;
        }
    }
    if(c1>c2){
      cout<<"Anton"<<endl;
    }
    else if(c2>c1){
      cout<<"Danik"<<endl;
    }
    else{
      cout<<"Friendship"<<endl;
    }

}
