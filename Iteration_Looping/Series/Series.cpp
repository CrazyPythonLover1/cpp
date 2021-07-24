#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int sum = 0, n;

    cout << "Enter the last number : ";
    cin >> n;

    // Series
    for (int i = 1; i<=n; i++)
    {
        // sum += i;
        // cout << i << endl;
    }

    // Even Series
    for (int i = 2; i <=n; i+=2)
    {
        // sum += i;
        // cout << i << endl;
    }

    // Odd Series 
    for( int i = 1; i<=n; i+=2)
    {
        // sum += i;
        // cout << i << endl;
    }

    // Square Series
    for(int i=1; i<=n; i++)
    {
        // sum += pow(i,2);
        // cout << i*i << endl;
    }

    // x to the power 5 ===> Series
    for(int i=1; i<=n; i++)
    {
        sum += pow(i,5);
        cout << pow(i,5) << endl;
    }
    
    cout << "Sum of the Series: " << sum << endl;

    return 0;
}