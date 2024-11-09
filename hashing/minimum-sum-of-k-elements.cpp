#include <iostream>
using namespace std;

int main()
{
    int arr[] = {-2, 10, 1, 3, 2, -1, 4, 5};
    int s = 0;
    int e = 2;
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    int currsum = 0;

    // Calculate the initial sum of the first subarray of length k
    for (int i = s; i <= e; i++)
    {
        currsum += arr[i];
    }

    int minSum = currsum; // Initialize the minimum sum with the sum of the first subarray

    // Iterate through the remaining subarrays
    while (e < n - 1)
    {
        currsum -= arr[s]; // Remove the element at the start of the current subarray
        s++;               // Move the start pointer forward
        e++;               // Move the end pointer forward
        currsum += arr[e]; // Add the element at the end of the current subarray

        // Update minSum if the current sum is smaller
        minSum = min(minSum, currsum);
    }

    cout << minSum;
    return 0;
}
