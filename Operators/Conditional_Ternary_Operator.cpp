#include<iostream>
using namespace std;

int main()
{
    int num1, num2;

    num1 = 20;
    num2 = 30;

    int max = (num1>num2) ? num1 : num2;

    cout << "Max Number" << max;
    
    return 0;
}