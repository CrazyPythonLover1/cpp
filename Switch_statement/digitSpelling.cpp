#include<iostream>
using namespace std;

int main()
{
    int digit;

    cout << "Enter a digit : ";
    cin>>digit;

    switch(digit){
        case 0:
            cout << "Zero" << endl;
            break;
        case 1:
            cout << "One" << endl;
            break;
        case 2:
            cout << "Two" << endl;
            break;
        case 3:
            cout << "Three" << endl;
            break;
        case 4:
            cout << "Four" << endl;
            break;
        default:
            cout << "Invalid digit";
    }

    return 0;
}