// M1 BRUTE FORCE ->O(nlog(n))
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter array size: ";
//     cin >> n;
    
//     vector<int> arr(n);
//     for(int i = 0; i < n; i++)
//         cin >> arr[i];
//     sort(arr.begin(),arr.end());
//         vector<int> ans;
//         int temp=arr[0];
//         ans.push_back(temp);
//         for(int i=1;i<n;i++)
//         {
//             if(arr[i]!=temp)
//             {
//                 ans.push_back(arr[i]);
//                 temp=arr[i];
//             }  
//         }
//         for(int i = 0; i < ans.size(); i++)
//         cout << ans[i]<<" ";
//     return 0;

// }
// 2 3 1 9 3 1 3 9



// M2 BRUTE FORCE ->O(n)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> mark(n,1); //initialize all values to 1

    for (int i = 0; i < n; i++) {
        if (mark[i] == 1) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    mark[j] = 0; // Mark duplicates as 0
                }
            }
        }
    }

    cout << "Duplicate elements: ";
    for (int i = 0; i < n; i++) {
        if (mark[i] == 0) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
