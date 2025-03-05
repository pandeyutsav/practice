#include <bits/stdc++.h>
using namespace std;
void insertEnding(vector<int>& arr, int n)
{
    arr.push_back(n);
    for(int i = 0; i < arr.size(); i++)
    cout << arr[i]<<" ";
cout<<endl;
}

void insertBeginning(vector<int>& arr,int num)
{
    arr.push_back(0);
    for(int i=arr.size()-1;i>=1;i--)
    arr[i]=arr[i-1];
    arr[0]=num;
    for(int i = 0; i < arr.size(); i++)
    cout << arr[i]<<" ";
cout<<endl;
}


void insertatPosition(vector<int>& arr, int pos, int num)
{
    // Resize the vector to make space for the new element
    arr.push_back(0);  // Adds a new element at the end, which we will replace
    for (int i = arr.size() - 2; i >= pos; i--)
    {
        arr[i + 1] = arr[i];  // Shift elements to the right
    }
    arr[pos] = num;  // Insert the number at the specified position

    for(int i = 0; i < arr.size(); i++)
    cout << arr[i]<<" ";
cout<<endl;
}

int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int num;
    cout<<"Enter no to be inserted: ";
    cin>>num;
    insertEnding(arr,num);
    int begNum;
    cout<<"Enter the number to be inserted in the beginning";
    cin>>begNum;
    insertBeginning(arr,begNum);

    int pos,posNum;
    cout<<"enter position and the no: ";
    cin>>pos>>posNum;

    insertatPosition(arr,pos,posNum);
    return 0;
}
