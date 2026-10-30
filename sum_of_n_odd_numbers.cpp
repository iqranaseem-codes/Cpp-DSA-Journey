#include <iostream>
using namespace std;

int main() {
    int n;
    int i=1;
    int oddSum =0;
    cout << "Enter a number = " ;
    cin >> n;

    while(n>=i) {
        if(i%2!=0) {
            oddSum +=i;
        } i++;
    }
    cout << "oddSum = " << oddSum;
    return 0;
}