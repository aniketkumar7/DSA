#include <iostream>
using namespace std;

int findDuplicate(nums)
{
    int low = 1, high = nums.size() - 1, cnt;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        cnt = 0;
        // cnt number less than equal to mid
        for (int n : nums)
        {
            if (n <= mid)
                ++cnt;
        }
        // binary search on left
        if (cnt <= mid)
            low = mid + 1;
        else
            // binary search on right
            high = mid - 1;
    }
    return low;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int nums[n];

    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";

    int ans = findDuplicate(nums[]);

    return 0;
}