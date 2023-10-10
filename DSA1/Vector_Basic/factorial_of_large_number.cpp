// Factorials of large numbers

// Given an integer N, find its factorial. return a list of integers denoting the digits that make up the factorial of N.

// Example 1:

// Input: N = 5
// Output: 120
// Explanation : 5! = 1*2*3*4*5 = 120


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> factorial(int N)
{
    vector<int> ans;
    ans.push_back(1);
    int carry =0;
    
    for(int i=2;i<=N;i++)
    {        
        for(int j=0;j<ans.size();j++)
        {
            int val = ans[j]*i + carry; 
            ans[j] = val%10;
            carry = val/10;
        }
        
        // if carry exits
        while(carry){
            ans.push_back(carry%10);
            carry/=10;
        }
    }
    
    reverse(ans.begin(),ans.end());
    return ans;
}

int main() {
    int N;
    cout << "Enter a number to find factorial: ";
    cin >> N;

    vector<int> ans = factorial(N);
    
    cout << "The factorial of " << N << " is: ";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
    }

    cout << endl;

    return 0;
}

