#include<iostream>
using namespace std;

int main(){
    int year,temp;
    cin>>year;
    int c=0,t=0;
    while(year>100){
      temp = year%10;
      c = temp*10+ c;
      year = year/10;
    }
    // while(year<100&&year){
    //   temp = year%10;
    //   t = temp*10+ t;
    //   year = year/10;
    // }
    cout<<c<<endl;
    cout<<year<<endl;
    cout<<2001%100<<endl;
}
