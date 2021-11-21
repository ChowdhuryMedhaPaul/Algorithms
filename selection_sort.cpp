#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,temp,arr[100];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>arr[i];

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {

            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }

    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}
