#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)
    cin>>nums[i];


    sort(nums.begin(),nums.end());
    if(nums[0] != nums[1]) cout<<nums[0]<<" ";
    
    for(int i=1;i<nums.size()-1;i++) 
       if(nums[i-1] != nums[i] && nums[i] != nums[i+1]) cout<<nums[i]<<" ";
       
    //handling last element of the array
    if(nums[nums.size()-2] != nums[nums.size()-1]) cout<<nums[nums.size()-1];


    
}