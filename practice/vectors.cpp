#include <bits/stdc++.h>
using namespace std;

int main(){


        vector<int> v1;

        for(int i=1; i<=5; i++) {
                v1.push_back(i);
        }
        // v1.resize(6);
// for(auto i=v1.begin(); i!=v1.end(); i++){
//     cout<<*i<<" ";
// }
        for(int i=0; i<v1.size(); i++) {
                cout<<v1[i]<<" ";
        }

// v1.shrink_to_fit();
// for(auto i=v1.begin(); i!=v1.end(); i++){
//     cout<<*i<<" ";
// }
// cout<<" "<<endl;
// cout<<v1.size();
// cout<<" "<<endl;
// cout<<v1.max_size();
// cout<<" "<<endl;
// cout<<v1.capacity();
//
// if (v1.empty() == false)
//        cout << "\nVector is not empty";
//    else
//        cout << "\nVector is empty";

        cout<<v1.at(4)<<" "; // returns the element at position g
        cout<<v1.front()<<" "; // returns the 1st element
        cout<<v1.back(); // returns the last element
        cout<<" "<<endl;
        vector<int> v2;

        v2.assign(5,15);
// for (int i = 0; i < v2.size(); i++)
//        cout << v2[i] << " ";
        v2.push_back(16);
        v2.emplace_back(80);
        v2.erase(v2.at(4));
// v2.insert(v2.end(),5);
// v2.insert(v2.begin(),50);
        for(auto ir=v2.cbegin(); ir!=v2.cend(); ++ir) {
                cout<<*ir<<" ";
        }

}
