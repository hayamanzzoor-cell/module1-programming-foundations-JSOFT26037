#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;
    if (a >= b && a >= c)
        cout << a << " " << "is the largest numbers" << endl;
    else if (b >= a && b >= c)
        cout << b << " " << "is the largest numbers" << endl;
    else
        cout << c << " " << "is the largest numbers" << endl;
    return 0;
}