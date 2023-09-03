// Q2. What will happen if we use cout inside the if as a condition?

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of times ypu want to repeat the name : ";

    cin >> n;
    if (cout << n)
    {
        cout << "Ani" << endl;
    }
}

// This will first print the value of n and then the name Ani for all value be it negative or positive or 0.