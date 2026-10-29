#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number = " << endl;
    cin >> n;

    for(int i = 1;n>=i;i++) {
        cout << i << "\t" ;
    }
    return 0;
}