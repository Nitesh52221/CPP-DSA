// Problem :Design a calculator to perform basic arithmetic operations (+,-,/,*,%)
#include <iostream>
using namespace std;

int input(int &num1, int &num2)
{
    cout << "\nEnter num1 : ";
    cin >> num1;
    cout << "\nEnter num2:";
    cin >> num2;
}

int Addition(int num1, int num2)
{
    return (num1 + num2);
}
int subtraction(int num1, int num2)
{
    return (num1 - num2);
}
int multiplication(int num1, int num2)
{
    return (num1 * num2);
}
int division(int num1, int num2)
{
    return (num1 / num2);
}
int modulo(int num1, int num2)
{
    return (num1 % num2);
}

int main()
{
    // write your code here
    int choice, num1, num2;
    cout << "Welcome to the Simple Calculator\n";
    cout << "1.Addition\n";
    cout << "2.Subtraction\n";
    cout << "3.Multiplication\n";
    cout << "4.Division\n";
    cout << "5.Modulo\n";
    cout << "\nEnter your choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        input(num1, num2);
        cout << "Sum :" << Addition(num1, num2);
        break;
    case 2:
        input(num1, num2);
        cout << "subtraction :" << subtraction(num1, num2);
        break;
    case 3:
        input(num1, num2);
        cout << "multiplication :" << multiplication(num1, num2);
        break;
    case 4:
        input(num1, num2);
        cout << "division :" << division(num1, num2);
        break;
    case 5:
        input(num1, num2);
        cout << "modulo :" << modulo(num1, num2);
        break;

    default:
        cout << "Wrong choice";
        break;
    }

    return 0;
}