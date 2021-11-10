#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;
int main()
{
    int x, y,z;
    stringstream stream;

    cin >> x;
    stream << x;
    stream >> hex >> y;
    stream >> bin >> z;
    cout << y <<endl;
    cout<< z <<endl;

    return 0;
}
