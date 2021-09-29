#include <bits/stdc++.h>
using namespace std;

int isVowel(char ch){
    switch(ch) {
     case 'a':
     case 'e':
     case 'i':
     case 'o':
     case 'u':
     case 'A':
     case 'E':
     case 'I':
     case 'O':
     case 'y':
     case 'Y':
     case 'U': {
        return 1;
    break;
   }
        default :
    return 0;
    }
}

int main(){
    string s,s1,s2;
    getline(cin,s);

    for(int i=0;i<s.length();i++){
        if(!isVowel(s[i])){
          s1.push_back(s[i]);
        }
    }

    for(int i=0; i<s1.length();i++){
        s1[i] = tolower(s1[i]);
    }

    for(int i=0;i<s1.length();i++){
        s2.push_back('.');
        s2.push_back(s1[i]);
    }
      cout<<s2<<endl;
}
