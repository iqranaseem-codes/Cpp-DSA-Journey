#include <iostream>
using namespace std;

int main()
{
    string name;
    int age;
    string gender;
    int marks;
    char grade;
    string country;

    cout << "Enter your name: ";
    cin >> name ;
    cout << "Your name is : " << name  << endl;
    cout << "Enter your age: ";
    cin >> age ;
    cout << "You are " << age << " years old." << endl;
    cout << "Enter your gender: ";
    cin >> gender ;
    cout << "You are a: " << gender << endl;
    cout << "Enter your marks: ";
    cin >> marks ;
    cout << "You secured " << marks << " marks ." << endl;
    cout << "Enter your grade: ";
    cin >> grade ;
    cout << "Your grade is : " << grade << endl;
    cout << "Enter your country: ";
    cin >> country ;
    cout << "You live in :" << country << endl;
    return 0;
}