#include<iostream>
using namespace std;

int addition(int, int);

int defaultParameter(int a = 20, int b = 30)
{
    int sum = a + b;
    return sum;
}

int main()
{
    int result = addition(10, 20);
    cout << result << endl;
    int defaultresult = defaultParameter();
    cout << "defaultresult : " << defaultresult << endl;
    return 0;
}



int addition(int a, int b)
{
    int sum = a + b;
    return sum;
}