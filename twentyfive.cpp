#include<iostream>
using namespace std;
int square(int a)
{
    return a*a;
}
int iseven(int b)
{
    return b%2==0;
}
int main()
{
    cout<<square(7);
    cout<<iseven(8);   
}