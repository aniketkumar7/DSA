// Add two numbers represented by two arrays

// Given two array A[0….N-1] and B[0….M-1] of size N and M respectively, representing two numbers such that every element of arrays represent a digit. For example, A[] = { 1, 2, 3} and B[] = { 2, 1, 4 } represent 123 and 214 respectively. The task is to find the sum of both the numbers.

// Example 1:

// Input : A[] = {1, 2}, B[] = {2, 1}
// Output : 33
// Explanation:
// N=2, and A[]={1,2}
// M=2, and B[]={2,1}
// Number represented by first array is 12.
// Number represented by second array is 21
// Sum=12+21=33


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

string calc_Sum(vector<int> a,int n,vector<int> b,int m)
{
    int i=n-1, j=m-1;
    int carry =0;
    string ans;
    
    // if both arrays are equal then add the last digit and carry to the next digit and so on 
    while(i>=0 && j>=0){
        int val = a[i] + b[j] + carry;
        int digit = val%10;
        ans.push_back(digit+ '0');
        carry = val/10;
        i--, j--;
    }
    
    // if a.size > b.size
    while(i>=0){
        int val = a[i] + 0 + carry;
        int digit = val%10;
        ans.push_back(digit+ '0');
        carry = val/10;
        i--;
    }
    
    // if b.size > a.size
    while(j>=0){
        int val = 0 + b[j] + carry;
        int digit = val%10;
        ans.push_back(digit+ '0');
        carry = val/10;
        j--;
    }
    
    // if carry exits then add
    if(carry) 
    ans.push_back(carry + '0');
    
    // remove zeros and then do reverse
    while(ans[ans.size()-1] == '0'){
        ans.pop_back();
    }
    
    reverse(ans.begin(),ans.end());
    return ans;
}

int main() {
    int n, m;
    vector<int> a, b;
    cout << "Enter the size of array1: ";
    cin >> n;
    cout << "Enter the size of array2: ";
    cin >> m;
    cout << "Enter the elements of array1: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    cout << "Enter the elements of array2: ";
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        b.push_back(x);
    }

    string result = calc_Sum(a, n, b, m);
    
    cout << "The sum of the two numbers is: " << result << endl;
    return 0;
}