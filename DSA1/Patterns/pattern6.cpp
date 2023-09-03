// Q4. Write a code to make Solid Diamond Pattern.

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
    for (int row = 0; row < n; row++) // now row 0 has 0 space, row -1 has 1 space, row -2 has 2 space, row -3 has 3 space, ...
    {
        //space
        int space = row; 
        
        while(space)
        {
            cout << " ";
            space--;
        }
        
        //star
        int star = n - row;  // ist row has n-0 star, second row has n-1 star, third row has n-2 star, ...
        while(star)
        {
            cout << "* ";
            star--;
        }
        
        cout << endl;
    }
// }


// Output:

// Enter the number of rows: 6
//      * 
//     * * 
//    * * * 
//   * * * * 
//  * * * * * 
// * * * * * * 
// * * * * * * 
//  * * * * * 
//   * * * *
//    * * *
//     * *
//      *