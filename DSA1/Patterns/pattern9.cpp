#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    
    for(int row = 0; row < n ; row++)
    {
        for(int space = 0; space < n - row - 1; space++)
        {
            cout << "  ";
        }
        
        //numbers
        int count = row + 1;
        
        for(int j = 0; j < row + 1; j++)
        {
            cout << count << " ";
            count++;
        }
        
        //reserse
        int start = 2*row; // that means in first row 2*0 = 0 but the j is not less than row, now in second 2*1 = 2
        // in third 2 *2= 4 and so on
        for(int j=0; j < row; j++)
        {
            cout << start << " ";
            start--;
        }
        
        cout << endl;
    }
}


// Output : 

// Enter the number of rows : 7
//             1 
//           2 3 2 
//         3 4 5 4 3 
//       4 5 6 7 6 5 4 
//     5 6 7 8 9 8 7 6 5 
//   6 7 8 9 10 11 10 9 8 7 6 
// 7 8 9 10 11 12 13 12 11 10 9 8 7 