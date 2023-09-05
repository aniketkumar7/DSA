
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Half Pyramid: " << endl;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            if (col == 0 || col == row || row == n - 1)
            {
                cout << col + 1 <<" ";
            }

            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}



// Output :

// Enter the number of rows: 7
// Half Pyramid: 
// 1 
// 1 2 
// 1   3 
// 1     4 
// 1       5 
// 1         6 
// 1 2 3 4 5 6 7 