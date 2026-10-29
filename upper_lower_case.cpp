#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter any character = " << endl;
    cin >> ch;

    if(ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase" << endl;
    } else if(ch >= 'a' && ch <= 'z')
     {
        cout << "Lowercase" << endl;
    } else {
        cout << "Invalid character" << endl;
    }
    return 0;
}