#include <iostream>
using namespace std;

int main() {
    int n,evenSum =0;
    cout << "Enter a number = ";
    cin >> n;

    for(int i=1;i<=n;i++) {
        if(i%2==0) {
            evenSum+=i;
        }
    }
    cout << "evenSum = " << evenSum;
    return 0;
}