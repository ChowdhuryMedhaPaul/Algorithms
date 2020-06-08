#include<bits/stdc++.h>
using namespace std;
int n, low,high,mid,arr[100],value;
int binary_search1(int arr[],int low, int high,int x)
{
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]<x)
            low=mid+1;
        else if(arr[mid]>x)
            high=mid-1;
        else
            return mid;
    }
    return -1;

}
int main()
{
    int n, low,high,mid,arr[100],value;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<"\nEnter search value: ";
    cin>>value;
    int result=binary_search1(arr,0,n-1,value);
    (result==-1) ? cout<<"Can't find the value\n"
                       : cout<<"The value and the position : "<<arr[result]<<" "<<result+1<<endl;

    return 0;
}
