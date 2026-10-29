#include <iostream>
using namespace std;

int main() {
    int n;
    int i =1;
    cout << "Enter a number = " << endl;
    cin >> n;

    while(n>=i) {
        cout << i <<"\t";
        i++;
    }
    return 0;
}