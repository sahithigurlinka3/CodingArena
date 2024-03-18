#include <iostream>
using namespace std;
int binary_search(int n,int arr[],int key)
{
    int high=n-1,low=0;
    while(low<=high)
    {
        int mid=(high+low)/2;
        if(arr[mid]==key)
        return mid+1;
        else if(arr[mid]<key)
        low=mid+1;
        else
        high=mid-1;
    }
    return -1;
}
int main()
{
    int n,key;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cin>>key;
    int res=binary_search(n,arr,key);
    cout<<res<<endl;
    return 0;
}