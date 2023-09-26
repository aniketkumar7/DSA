#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    int i = 0, b = 0;
    cout << "Enter the number to calculate binary representation: ";
    cin >> n;
    while(n > 0)
    {
        int a = n % 2;
        /* The line `b = a * pow (10,i) + b;` is calculating the binary representation of the input
        number. */
        b = a * pow (10,i) + b; 
        cout << b << " ";
        i++;
        n = n /2;
    }
}

// This code takes an integer input from the user and converts it into binary representation. 
// It uses a while loop to repeatedly divide the input number by 2 and store the remainder (0 or 1) in a variable a.
//  The remainder values are then concatenated in reverse order to form the binary representation in the variable b. 
// The binary representation is printed at each step.