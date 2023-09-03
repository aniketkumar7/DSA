#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool divisible = false;
    vector<int> v;
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    cout << "Enter the value of k: ";
    int k;
    cin >> k;
    
    int sum = 0, count = 0;
    /* The line `int *arr = new int[n];` is dynamically allocating an array of integers with size `n`.
    The `new` keyword is used to allocate memory on the heap, and `int *arr` is a pointer that will
    point to the first element of the allocated array. This allows you to create an array of
    integers whose size is determined at runtime. */
    int *arr = new int[n];
    
    cout << "Enter the elements of the array: ";
    
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }
    
    while(v.size() != k)
    {
        count++;
        divisible = false;
        
        for(int i=0 ; i<n ; i++)
        {
            /* The line `if(count % arr[i] == 0)` is checking if the value of `count` is divisible by
            the value of `arr[i]` without any remainder. In other words, it is checking if `count`
            is a multiple of `arr[i]`. */
            if(count % arr[i] == 0)
            {
                divisible = true;
                break;
            }
        }
        
        /* The code `if(divisible == false)` is checking if the variable `divisible` is equal to
        `false`. If it is, it means that the current value of `count` is not divisible by any
        element in the array `arr`. In this case, the code `v.push_back(count)` is executed, which
        adds the value of `count` to the end of the vector `v`. This is done to store the numbers
        that are not divisible by any element in the array. */
        if(divisible == false)
        {
            v.push_back(count);
        }
    }
    
    /* The code `for(int i=0 ; i<k ; i++)` is a for loop that iterates `k` times. */
    for(int i=0 ; i<k ; i++)
    {
        sum = sum + v[i];
    }
    
    cout << sum;
    
    return 0;
    
}