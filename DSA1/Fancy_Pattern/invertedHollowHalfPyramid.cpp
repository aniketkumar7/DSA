#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j <=n; j++)
        {
            if(j == i+1 || j == n || i == 0)
            {
                cout << j << " ";
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
// 1 2 3 4 5 6 7 
// 2         7 
// 3       7 
// 4     7 
// 5   7 
// 6 7 
// 7 