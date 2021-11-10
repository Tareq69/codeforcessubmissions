#include<iostream>
using namespace std;
int main(){
    int t;
    char s;
    cin>>t;
    while(t--){
      cin>>s;
      if(s=='B'||s=='b'){
          cout<<"BattleShip"<<endl;
      }
      else if(s=='C'||s=='c'){
            cout<<"Cruiser"<<endl;
        }
        else if(s=='D'||s=='d'){
            cout<<"Destroyer"<<endl;
        }
        else{
          cout<<"Frigate"<<endl;
        }
    }

}
