#include <iostream>
using namespace std;

int main() {
    int n;
    int sum =0;
    int i=1;
    cout << "Enter a number = " << endl;
    cin >> n;

    while(n>=i) {
        sum = sum+i;
        i++;
    }
    cout << "Sum = " << sum << endl;
    return 0;
}