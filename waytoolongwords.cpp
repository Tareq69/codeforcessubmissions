#include<bits/stdc++.h>
using namespace std;


int main(){

    int z,i;
    cin>>z;
    string word,s1,s2;
    int count=0;
    getline(cin,word);
    for(int i=0;i<z;i++){
        getline(cin,word);
        char w1 = word.front();
        char w2 = word.back();
        s1 = w1;
        s2 = w2;
        if(word.length()>10){
          for(int j=1;j<word.length()-1;j++){
                count++;
          }
           word = w1 + to_string(count) + w2;
           cout<<word<<endl;
           count = 0;
        }
        else{
          cout<<word<<endl;
        }
    }

}
