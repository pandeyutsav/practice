#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    
    if(n == 1 || n == 2) {
        cout << "-1 -1" << endl;
        return 0;
    }

    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int mx = INT_MIN, smx = INT_MIN;
    int mn = INT_MAX, smn = INT_MAX;

    // Finding first max and first min
    for(int i = 0; i < n; i++) {
        mx = max(mx, arr[i]);
        mn = min(mn, arr[i]);
    }

    // Finding second max and second min
    for(int i = 0; i < n; i++) {
        if(arr[i] < mx && arr[i] > smx)
            smx = arr[i];

        if(arr[i] > mn && arr[i] < smn)
            smn = arr[i];
    }

    // Handling cases where second max/min doesn't exist
    if (smx == INT_MIN) smx = -1;
    if (smn == INT_MAX) smn = -1;

    cout << smx << " " << smn << endl;
    
    return 0;
}
