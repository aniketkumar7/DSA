
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n; 
    
    for(int row =0; row<n; row++)
    {
        int col;
        for(col = 0; col < row + 1; col++)
        {
            int ans = col + 1;
            char ch = ans + 'A' - 1;
            cout << ch << " " ;              
        }
        
        col = col - 1;
        
        while(col >= 1)
        {
            int ans = col;
            char ch = ans + 'A' - 1;
            cout << ch << " " ; 
            col--;
        }
        
        cout << endl;
    }
}


// Output :


// print col + 1 for upper part 

// print col for lower part


// Enter the number of rows: 8
// 1 
// 1 2 1 
// 1 2 3 2 1 
// 1 2 3 4 3 2 1 
// 1 2 3 4 5 4 3 2 1 
// 1 2 3 4 5 6 5 4 3 2 1 
// 1 2 3 4 5 6 7 6 5 4 3 2 1 
// 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 


// Enter the number of rows: 8
// A 
// A B A 
// A B C B A 
// A B C D C B A 
// A B C D E D C B A 
// A B C D E F E D C B A 
// A B C D E F G F E D C B A 
// A B C D E F G H G F E D C B A 