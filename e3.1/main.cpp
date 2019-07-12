/*
 • E3.1Write a program that reads an integer and prints whether it is negative, zero, or positive.
 */

#include <iostream>


using namespace std;

int main()
{
    cout << "Enter integer: ";
    int integer;
    cin >> integer;
    
    if (integer > 0)
    {
        cout << "positive" << endl;
    }
    
    else if (integer < 0)
    {
        cout << "negative" << endl;
    }
    
    else
    {
        cout << "zero" << endl;
    }
    return 0;
}


