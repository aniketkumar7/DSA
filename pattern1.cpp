// Q3. Write a code to make Full Pyramid Pattern

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        // spaces
        int space = n - row - 1; // now for row = 0, space = n - 0 - 1 = n - 1 = 1
        while (space)            // now for row = 0, space = 1 < 2 = true so print 1 times space and repeat the process until space = 0
        {
            cout << " ";
            space--;
        }

        // stars
        int star = 0;
        while (star < row + 1) // now for row = 0, star = 0 < 1 = true so print *
        {
            cout << "* ";
            star++;
        }

        cout << endl;
    }
}