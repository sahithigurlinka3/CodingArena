#include <iostream>
using namespace std;
int get_upper_bound(int n,int arr[],int key)
{
    int high=n-1,low=0,ans=0;
    while(low<=high)
    {
        int mid=(high+low)/2;
        if(arr[mid]>key)
        {
            ans=mid;
            high=mid-1;
        }
        else
        low=mid+1;
    }
    return ans;
}
int main()
{
    int n,key;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cin>>key;
    int res=get_upper_bound(n,arr,key);
    cout<<res<<endl;
    return 0;
}