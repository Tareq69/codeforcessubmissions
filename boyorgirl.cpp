#include<bits/stdc++.h>
using namespace std;

string unique(string s)
{
    string str;
    int len = s.length();

    for(int i = 0; i < len; i++)
    {

        char c = s[i];

        auto found = str.find(c);
        if (found == std::string::npos)
        {
            str += c;
        }
    }
    return str;
}

int main(){
    string s;
    int c=0;
    getline(cin,s);
    string s1 = unique(s);
    for(int i=0;s1[i]!='\0';i++){
      if(s1[i]!=s1[i+1]){
        c++;
      }
    }
    if(c%2==0){
      cout<<"CHAT WITH HER!"<<endl;
    }
    else{
      cout<<"IGNORE HIM!"<<endl;
    }
}
