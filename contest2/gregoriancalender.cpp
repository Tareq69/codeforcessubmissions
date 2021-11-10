#include<iostream>
#include <cmath>
using namespace std;

int main(){
    int t,temp;
    cin>>t;
    int year;
    while(t--){
      cin>>year;
      double w;
      double k = 1;
      double m = 11;
      int y = year%100;
      y = y-1;
      while(year>100){
        year = year/10;
      }
      double c = year;
      w = (k +floor((2.6*m-0.2))-2*c+y+floor((y/4))+floor((c/4)));
      w = std::fmod(w,7);
      if(w==0){
            cout<<"sunday"<<endl;
      }
      else if(w==1){
            cout<<"monday"<<endl;
      }
      else if(w==2){
            cout<<"tuesday"<<endl;
      }
      else if(w==3){
            cout<<"wednesday"<<endl;
      }
      else if(w==4){
            cout<<"thursday"<<endl;
      }
      else if(w==5){
            cout<<"friday"<<endl;
      }
      else{
        cout<<"saturday"<<endl;
      }
      cout<<c<<endl;
      cout<<w<<endl;
    }
}
