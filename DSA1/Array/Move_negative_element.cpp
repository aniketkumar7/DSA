#include<iostream>
using namespace std;

void moveAllNegative(int arr[], int n)
{
    // Dutch National Flag Algorithm
    
    int low = 0, high = n -1;
    
    while(low < high)
    {
        if(arr[low] < 0)
        low++;
        
        else if(arr[high] > 0)
        high--;
        
        else
        swap(arr[low], arr[high]);
    }
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin>>n;
    
    int arr[n];
    
    for(int i= 0; i< n; i++)
    {
        cin>>arr[i];
    }
    
    moveAllNegative(arr, n);
    
    cout << "Array after moving negative element: " << endl;
    
    for(int i = 0; i< n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout << endl;
    
    return 0;
}