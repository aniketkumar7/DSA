#include<iostream>
#include<vector>
using namespace std;

int uniqueElement(vector<int> arr)
{
    int ans = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    vector<int>arr{ 4, 5, 8 ,8, 3, 5, 4};    
    int ans = uniqueElement(arr);
    cout << "The unique element is :" << ans << "\n";
    return 0;
}