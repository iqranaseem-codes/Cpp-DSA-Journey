#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    cout << "Enter a number = ";
    cin >> n;

    for(int i=1; n>=i; i++) {
        if(i % 3 ==0 ) { 
            sum += i;
        }
    }
    cout << "Sum of multiples of 3 from 1 to " << n << " is: " << sum << endl;
    return 0;
}