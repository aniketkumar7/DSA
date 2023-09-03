#include<iostream>
#include<cassert>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;    
    assert(n<=9);
    
    for(int i =0; i<n; i++)
    {
        int start_num_index = 8 - i;
        int num = i +1;
        int count = num;
        for(int j =0; j<17; j++)
        {
            if(j == start_num_index && count > 0)
            {
                cout << num;
                start_num_index += 2;
                count--;
            }
            
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}