#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    
    for(int row =0; row < n; row++)
    {
        //space 
        
        for(int space = 0; space < n- row - 1; space++)
        {
            cout << "  ";
        }
        
        // numbers
        int start = 1;
        for(int j =0; j< 2*row +1; j++)
        {
            if(row ==0 || row == n-1)
            {
                if(j % 2 == 0)
                {
                    cout << start << "  ";
                    start++;
                }
            }
            else
            {
                if(j == 0) // first column
                cout << 1;
                
                else if(j == 2*row) // last column
                cout << row + 1;
                
                else
                cout << "  ";
            }
        }
        
        cout << endl;
    }
}