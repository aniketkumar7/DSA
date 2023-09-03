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
            cout << "* ";
        }
        cout << endl;
    }
    
    cout << endl;
    
    cout << "Inverted Half Pyramid: " << endl;
    for(int row = 0; row < n; row++)
    {
        for(int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}