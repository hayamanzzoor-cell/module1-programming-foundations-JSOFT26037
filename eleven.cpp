#include <iostream>
using namespace std;
int main()
{
    double a, b;
    char op;
    cout << "Enter first number, operator, second number: ";
    cin >> a >> op >> b;
    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    default:
        cout << "Invalid operator" << endl;
    }
    return 0;
}