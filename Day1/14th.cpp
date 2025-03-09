#include <iostream>
#include <vector>
#include <algorithm>  // For reverse()
using namespace std;

void rotateByK(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n;  // Handle cases where k > n

    // Step 1: Reverse the entire array
    reverse(arr.begin(), arr.end());

    // Step 2: Reverse the first k elements
    reverse(arr.begin(), arr.begin() + k);

    // Step 3: Reverse the remaining elements
    reverse(arr.begin() + k, arr.end());
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int k;
    cout << "Number of rotations: ";
    cin >> k;

    rotateByK(arr, k);

    // Print the rotated array
    cout << "Rotated array: ";
    for (int num : arr)
        cout << num << " ";
    
    return 0;
}
