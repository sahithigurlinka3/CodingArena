#include <iostream>
using namespace std;
int binary_search(int arr[],int key,int low,int high)
{
    if(low>high)
    return -1;
    int mid=(high+low)/2;
    if(arr[mid]==key)
    return mid+1;
    else if(arr[mid]<key)
    return binary_search(arr,key,mid+1,high);
    else
    return binary_search(arr,key,low,mid-1);
}
int main()
{
    int n,key;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cin>>key;
    int low=0,high=n-1;
    int res=binary_search(arr,key,low,high);
    cout<<res<<endl;
    return 0;
}