#include <iostream>
using namespace std;
int main()
{
    int age;
    bool hasTicket = true;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18)
    {
        if (hasTicket)
        {
            cout << "Entry allowed" << endl;
        }
        else
        {
            cout << "Buy a ticket first" << endl;
        }
    }
    else
    {
        cout << "Not eligible by age" << endl;
    }
    return 0;
}