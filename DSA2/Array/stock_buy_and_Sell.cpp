// Approach:

// Create a variable maxPro and store 0 initially.
// Create a variable minPrice and store some larger value(ex: MAX_VALUE) value initially.
// Run a for loop from 0 to n.
// Update the minPrice if it is greater than the current element of the array
// Take the difference of the minPrice with the current element of the array and compare and maintain it in maxPro.
// Return the maxPro.

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int maxProfit(vector<int> &arr) {
    int maxPro = 0;
    int n = arr.size();
    int minPrice = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        minPrice = min(minPrice, arr[i]);
        maxPro = max(maxPro, arr[i] - minPrice);
    }
    
    return maxPro;
}

int main() {
    int n;
    vector<int> arr;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    int maxPro = maxProfit(arr);
    cout << "Max profit is: " << maxPro << endl;
}