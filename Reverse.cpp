#include <iostream>
#include <string>

using namespace std;

int main()
{
    string x;
    cout<< "Enter Something" << endl;
    cin >> x ;
    int len = x.size();
    string str = "";
    for (int i = 0; i <= len; i++) {
      str += x[len-i];
    }

    cout << str <<endl;
    return 0;
}
