#include <iostream>
using namespace std;

int main() {
    int fact =1;
    int i =1;
    int n;
    cout << "Enter a number = ";
    cin >> n;

    while( n>= i) {
        fact = fact* i;
        i++;
    }
    cout << "Factorial of a number is = " << fact;
    return 0; 
}