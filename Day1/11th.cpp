#include <bits/stdc++.h>
using namespace std;
int product(vector<int>&arr,int s,int e)
{
    int prod=1;
    for(int i=s;i<=e;i++)
    prod*=arr[i];
    return prod;
}
int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int mx=arr[0];
    for(int i=0; i<n-1;i++)
        for(int j=i+1; j<n ;j++)
            mx=max(mx,product(arr,i,j));
cout<<mx;
}
