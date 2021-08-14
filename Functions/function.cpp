#include<iostream>
using namespace std;

// prototypes 
void addition(int,int);

int main()
{
    addition(10, 300);
    addition(10, 400);
    addition(10, 500);
    addition(10, 600);
    return 0;
}

void addition(int a, int b)
{
    int sum = a+b;
    cout << "sum :"<< sum << endl;
}