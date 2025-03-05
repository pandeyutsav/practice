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
    int k;
    cout<<"Enter swap value";
    cin>>k;
    while(k)
    {
        int temp=arr[0];
        for(int i=0;i<n;i++)
        arr[i]=arr[i+1];
        arr[n-1]=temp;
        k--;
    }
    for(int i = 0; i < n; i++)
        cout << arr[i]<<" ";

}