#include<iostream>
using namespace std;

// prototypes 
void addition(int,int);
void subtraction(int,int);
void multiplication(int,int);
void divition(int,int);

int main()
{
    addition(10, 300);
    subtraction(20,5);
    multiplication(20,5);
    divition(20,5);

    return 0;
}

void addition(int a, int b)
{
    int sum = a+b;
    cout << "sum :"<< sum << endl;
}

void subtraction(int a, int b)
{
    int result = a-b;
    cout << "subtraction :"<< result << endl;
}

void multiplication(int a, int b)
{
    int result = a*b;
    cout << "multiplication :"<< result << endl;
}

void divition(int a, int b)
{
    int result = a/b;
    cout << "divition :"<< result << endl;
}