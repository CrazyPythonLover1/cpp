#include<iostream>
using namespace std;

int main()
{
    char ch;
    char letter;

    cout << "Enter any letter : ";
    // cin >> ch;
    cin >> letter;

    ch = tolower(ch);
    letter = tolower(letter);

    if (ch) {
        switch(ch) {
        case 'a':
            cout << "Vowel";
            break;
        case 'e':
            cout << "Vowel";
            break;
        case 'i':
            cout << "Vowel";
            break;
        case 'o':
            cout << "Vowel";
            break;
        case 'u':
            cout << "Vowel";
            break;
        default:
            cout << "Consonant";
    }
    }

    switch(letter) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "Vowel";
            break;
        default:
            cout << "Consonant";
    }

    return 0;
}