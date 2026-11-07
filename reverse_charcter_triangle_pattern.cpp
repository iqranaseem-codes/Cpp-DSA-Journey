#include <iostream>
using namespace std;

int main() {
    int n; 
    cout << "Enter a number = ";
    cin >> n;

    for(int i = 0 ; i<n ; i++) {
        char ch = 64; 
        for(int j = (i+1) ; j>0 ; j--) {
            cout << (ch+i+1) << " ";
        }
        cout << endl;
    } 
    return 0;
}