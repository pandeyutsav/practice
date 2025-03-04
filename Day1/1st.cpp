#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter array size";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        min=arr[i];    
    }
    cout<<min;
}