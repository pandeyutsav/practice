#include <bits/stdc++.h>
using namespace std;

// Function to sort 2D vector by frequency
void sort2darray(vector<vector<int>> &array2d, int k) {
    for (int i = k - 2; i >= 0; i--) {  // Fix: Use k instead of n
        bool swapped = false;
        for (int j = 0; j <= i; j++) {
            if (array2d[1][j+1] > array2d[1][j]) {  // Fix: Compare frequency column
                swap(array2d[1][j+1], array2d[1][j]); // Swap frequency
                swap(array2d[0][j+1], array2d[0][j]); // Swap corresponding element
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}



// Function to sort elements of vector by frequency
void Sortele(vector<int> &arr) {
    // Step 1: Sort the vector
    sort(arr.begin(), arr.end());

    // Step 2: Create a 2D vector
    vector<vector<int>> arr2d(2, vector<int>(arr.size()));
    int k = 0, count = 0;

    for (size_t i = 0; i < arr.size(); i++) {
        if (i == 0) {
            arr2d[0][k] = arr[i];
            count = 1;
        } else if (arr[i] == arr[i - 1]) {
            count++;
        } else {
            arr2d[1][k] = count;
            count = 1;
            k++;
            arr2d[0][k] = arr[i];
        }
    }
    arr2d[1][k] = count;
    k++;

    // Step 3: Sort the 2D vector according to frequency
    sort2darray(arr2d, k);

    // Step 4: Store the answer in original vector
    k = 0;
    int i = 0;
    while (i < arr.size()) {
        while (arr2d[1][k] > 0) {
            arr[i] = arr2d[0][k];
            i++;
            arr2d[1][k]--;
        }
        k++;
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 2, 4, 3, 1, 2};
    Sortele(arr);
    
    // Print sorted elements based on frequency
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
