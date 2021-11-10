#include <iostream>
#include <fstream>
using namespace std;
int main(){
    // ofstream myfile;
    string m;
    // myfile<<"Hello World!";
    ifstream myfile;
    myfile.open("redun.txt");
    while (getline (myfile, m)) {
  // Output the text from the file
  cout << m;
}
    myfile.close();
}
