#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num1, num2;
    cout << " Enter 2 numbers : ";
    cin >> num1 >> num2;

    // cout << noshowpoint;
    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(2);

    float sum = num1 + num2;
    cout <<"Sum is : " << sum << endl;

    float sub = num1 - num2;
    cout <<"Subtraction is : " << sub << endl;

    float mul = num1 * num2;
    cout <<"Multiplication is : " << mul << endl;

    float div = (float) num1 / num2;
    cout <<"Division is : " << div << endl;

    int rem = num1 % num2;
    cout <<"Reminder is : " << rem << endl;

    return 0;
}