#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    char operation;

    cout << "Enter Two numbers: ";
    cin >> num1 >> num2;

    cout << "Enter Operation(+,-,*,/)";
    cin >> operation;

    switch (operation)

    {
    case '+':
        cout << "Addition is: " << num1 + num2 << endl;
        break;

    case '-':
        cout << "Substraction is:" << num1 - num2 << endl;
        break;

    case '*':
        cout << "Multiplication is: " << num1 * num2;
        break;

    case '/':

        if (num2 == 0)
        {
            cout << "No is not divisible by zero";
        }
        else
        {
            cout << "Divion is: " << num1 / num2;
        }
        break;
    default:
        cout << "invalid operator choosed";
        break;
    }
}
