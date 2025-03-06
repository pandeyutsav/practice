#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];
	for (int i = 0; i < n; i++) {
		set<int>s;
		for (int j = 0; j < n; j++) {
			if (arr[j] < arr[i]) {
				s.insert(arr[j]);
			}
		}
		cout << s.size() + 1 << " ";
	}
}

    // arr[] = {20, 15, 26, 2, 98, 6}
    // [2, 6, 15, 20, 26, 98]
    // 2  -> Rank 1  
    // 6  -> Rank 2  
    // 15 -> Rank 3  
    // 20 -> Rank 4  
    // 26 -> Rank 5  
    // 98 -> Rank 6  
