#include<bits/stdc++.h>
using namespace std;

void eraseAllSubStr(string & mainStr, string & toErase)
{
    size_t pos = std::string::npos;
    string s = " ";
    // Search for the substring in string in a loop untill nothing is found
    while ((pos  = mainStr.find(toErase) )!= std::string::npos)
    {
        // If found then erase it from string
        mainStr.insert(pos++, s);
        mainStr.erase(pos, toErase.length());

    }
}

int main(){
  string str;
  string st = "WUB";
  getline(cin,str);
  eraseAllSubStr(str,st);
  cout<<str<<endl;
}
