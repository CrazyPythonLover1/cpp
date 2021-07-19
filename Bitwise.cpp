#include<iostream>
using namespace std;

int main()
{
    int a = 32;
    int b = 12;
    int x;

    x = a & b;
    cout << x <<endl;

    x = a | b;
    cout << x <<endl;

    x = a ^ b;
    cout << x <<endl;

    return 0;
}