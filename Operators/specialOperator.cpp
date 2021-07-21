#include<iostream>
using namespace std;

int main()
{
    int a;
    float f;
    double d;
    char ch;
    char name[100];

    int c = sizeof(d);
    cout << c << endl;

    int x,y,sum;

    // Comma Operator
    sum = (x=20, y=30, sum=x+y);

    cout << sum << endl;
    
    return 0;
}