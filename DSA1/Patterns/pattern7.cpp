// Q4. Write a code to make Hollow Diamond Pattern.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    
    for(int row= 0; row < n; row++)
    {
        int space = n -row - 1;
        while(space){
            cout << " ";
            space--;
        }
        
        for(int col = 0; col < 2*row + 1; col++)
        {
            if(col == 0 || col == 2*row )
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    
    for(int row= 0; row < n; row++)
    {
        int space = row;
        while(space){
            cout << " ";
            space--;
        }
        
        for(int col = 0; col < 2*n -(2*row + 1); col++)
        {
            if(col == 0 || col == 2*n - 2*row - 2)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    
}



// Output:

// Enter the number of rows: 6
//      *
//     * *
//    *   *
//   *     *
//  *       *
// *         *
// *         *
//  *       *
//   *     *
//    *   *
//     * *
//      *