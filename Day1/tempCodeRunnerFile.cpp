void rotateByK(vector<int>&arr,int k)
{
    while(k)
    {
        int temp=arr[arr.size()-1];
        for(int i=arr.size()-1;i>0;i--)
            swap(arr[i],arr[i-1]);
        arr[0]=temp;
        k--;
    }
}