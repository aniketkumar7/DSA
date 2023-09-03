#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Half Pyramid: " << endl;
    for(int row = 0; row < n; row++)
    {
        for(int col = 0; col < row + 1; col++)
        {
            cout << col + 1 << " ";
        }
        cout << endl;
    }
    
    cout << endl;
    
    cout << "Inverted Half Pyramid: " << endl;
    for(int row = 0; row < n; row++)
    {
        for(int col = 0; col < n - row; col++)
        {
            cout << col + 1 << " ";
        }
        cout << endl;
    }
}


// Output:

// Enter the number of rows: 6
// Half Pyramid: 
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 
// 1 2 3 4 5 6 

// Inverted Half Pyramid:
// 1 2 3 4 5 6
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1