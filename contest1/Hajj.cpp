#include<iostream>
#include<string>
using namespace std;

int main(){
    int i = 1;
    string s;
    while(true){
    getline(cin, s);
      if(s=="Hajj"){
        cout<<"Case "<< i <<":"<<" Hajj-e-Akbar"<<endl;
      }
      else if(s=="Umrah"){
        cout<<"Case "<< i <<":"<<" Hajj-e-Asghar"<<endl;
      }
      else{
        break;
      }
      i +=1;
    }
}
