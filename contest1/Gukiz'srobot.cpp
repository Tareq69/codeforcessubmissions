#include<bits/stdc++.h>
#include <cstdlib>
using namespace std;


int main(){

    long int x1,x2,y1,y2,d,d1,d2;
    cin>>x1>>y1;
    cin>>x2>>y2;

    d1 = abs(x1-x2);
    d2 = abs(y1-y2);
    if(d1==d2){
      d = d1;
    }
    else if(d1>d2){
        d = (d1-d2)+d2;
    }
    else{
      d = (d2-d1)+d1;
    }

    cout<<d<<endl;
}
