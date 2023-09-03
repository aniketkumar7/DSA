// Q4. Write a code to make Hollow Diamond Pattern.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int space = n - i - 1;
        while (space >= 0)
        {
            cout <<" ";
            space--;
        }

        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j == 0 or j == 2 * i)
            {
                cout << "*";
            }
            else
            {
                cout <<"  ";
            }
        }
        
        space = n - i - 1;
        while (space >= 0)
        {
            cout <<" ";
            space--;
        }

        for (int j = 0; j < 2 * n - 2 *i - 1; j++)
        {
            if (j == 0 or 2 * n - 2 *i - 2)
            {
                cout << "*";
            }
            else
            {
                cout <<"  ";
            }
        }
        
        cout << endl;
    }
}