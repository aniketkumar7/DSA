// Hollow Rectanglular Pattern

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;

    for (int row = 0; row < n; row++)
    {
        for (int column = 0; column < m; column++)
        {

            if (row == 0 || row == n - 1)
            {
                cout << "* ";
            }

            else
            {
                if (column == 0 || column == m - 1) // if column is 0 or m-1 then print *
                {
                    cout << "* ";
                }

                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
}