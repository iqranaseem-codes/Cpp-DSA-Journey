#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num1 , num2 ;
    cout << "Enter num1 = " << endl;
    cin >> num1 ;
    cout << "Enter num2 = " << endl;
    cin >> num2 ;
    double sum =num1+num2;
    double sub =num1-num2;
    double pro =num1*num2;
    double div =num1/num2;
    double percentage =div*100;
    double mod = fmod(num1,num2);

    cout << "Sum = " << sum << endl;
    cout << "Subtraction = " << sub << endl;
    cout << "Product = " << pro << endl;
    cout << "Division = " << div << endl;
    cout << "Percentage = " << percentage << endl;
    cout << "Remainder = " << mod << endl;

    return 0;
}