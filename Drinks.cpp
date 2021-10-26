#include <bits/stdc++.h>
#include <iomanip>
using namespace std;


int main(){

        float n;
        cin>>n;
        float sum = 0;
        float t = n;
        float x;
        while(n--) {
                cin>>x;
                sum+= x/100;
        }

        cout<<setprecision(5)<<sum * (1/t) * 100 <<endl;

}
