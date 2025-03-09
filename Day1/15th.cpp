
// M1). brute force
// #include <bits/stdc++.h>
// using namespace std;

// void equil(vector<int>& arr) {
//     for(int i=1;i<arr.size()-1;i++)
//     {
//         int sum1=0,sum2=0;
//         for(int j=0;j<i;j++)
//         sum1+=arr[j];
    
//         for(int k=i+1;k<arr.size();k++)
//         sum2+=arr[k];

//         if(sum1==sum2)
//         {
//             cout<<i<<endl;
//             break;
//         }
//     }
// }

// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;
   
//     vector<int> arr(n);
//     cout << "Enter array elements: ";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     if(n<1) return 0;
//     equil(arr);
// return 0;
// }



// M2). O(N) tc

#include <iostream>
 
using namespace std;
int findEquilibriumIdx(int nums[], int n) {
  int totalSum = 0;
  for (int i = 0; i < n; i++) {
    totalSum += nums[i];
  }
  int leftSum = 0, rightSum = totalSum;
  for (int i = 0; i < n; i++) {
    rightSum -= nums[i];
    if (leftSum == rightSum) {
      return i;
    }
    leftSum += nums[i];
  }
  return -1;
}
int main() {
  int n = 5;
  int arr[] = {2, 3, -1, 8, 4};
  int equilibriumidx = findEquilibriumIdx(arr, n);
  cout << equilibriumidx << endl;
  return 0;
}