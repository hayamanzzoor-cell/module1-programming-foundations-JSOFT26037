#include <iostream>
using namespace std;
int main()
{
    string name;
    int rollNo;
    float marks;
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter roll no: ";
    cin >> rollNo;
    cin.ignore();
    cout << "Enter marks: ";
    cin >> marks;
    cout << "\n--- Student Record ---\n";
    cout << "Name: " << name << endl;
    cout << "Roll No: " << rollNo << endl;
    cout << "Marks: " << marks << endl;
    return 0;
}