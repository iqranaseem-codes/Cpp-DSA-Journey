#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age =" << endl;
    cin >> age;

    if(age>=18) {
        cout << "Congrats!" << endl << "You are eligible." << endl << "You can get your license.";
    } else {
        cout << "Sorry!" << endl <<  "You're not eligible." << endl << "You're under age." << endl;
    }
    return 0;
}