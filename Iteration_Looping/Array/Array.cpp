#include<iostream>
using namespace std;

int main()
{
    // int marks[5] = {55, 65, 75, 88, 74};
    int marks[5];

    for (int i = 0; i < 5; i++)
    {   
        cout << "Marks for student " << i+1 << " = ";
        cin >> marks[i];
    }
    
    cout << "Marks are : "<< endl;

    for (int i=0; i<=4; i++)
    {
        cout << marks[i] <<endl;
    }
    return 0;
}