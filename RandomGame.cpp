#include<iostream>
using namespace std;
#include<cstdlib>

int main()
{
    while (true)
    {
        int guessNumber, randomNumber;

        cout << "Enter your guess between 1 to 5 : ";
        cin >> guessNumber;

        randomNumber = rand()% 5 + 1;

        if (randomNumber == guessNumber)
        {
            cout << "You have won" << endl << endl;
        }
        else {
            cout << "You have lost. try again"  << endl;
            cout << "Random number was: " << randomNumber << endl << endl;
        }
    }
    

    return 0;
}