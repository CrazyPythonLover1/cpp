#include<iostream>
using namespace std;

void displayArray(int num[], int arraySize)
{
    for (int i = 0; i <= 4; i++)
    {
        cout << num[i] << " ";
    }
    
}

int main()
{
    int number[5] = {10,20,30,40,50};
    int number2[5] = {1,2,3,4,5};
    displayArray(number, 5);
    cout << endl;
    displayArray(number2, 5);

    return 0;
}