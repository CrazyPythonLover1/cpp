#include<iostream>
using namespace std;

void addition(int a, int b)
{
    int sum = a+b;
    cout << "sum :"<< sum << endl;
}

int main()
{
    addition(10, 300);
    addition(10, 400);
    addition(10, 500);
    addition(10, 600);
    return 0;
}