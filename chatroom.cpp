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

  string s,s2;
  getline(cin,s);
  int arr[7];
  s2 = unique(s);
  for(int i=0;i<s2.length();i++){
    if(s2[i]=='h'&& s2[i] > s2[i+1] && s2[i+1]< s2[i+2]){
      cout<<"YES"<<endl;
      exit(0);
    }
  }
  cout<<"NO"<<endl;
  cout<<s2<<endl;
}
