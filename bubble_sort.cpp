#include<bits/stdc++.h>
using namespace std;

int main()
{

    int i,j,n,temp;
    cout<<"enter numbers: ";
    cin>>n;
    int data[n];
    cout<<"\nenter elements: ";
    for(i=1; i<=n; i++)
        cin>>data[i];
    for(i=1; i<=n; i++)
    {
        for(j=1; j<n; j++)
        {
            if(data[j+1]<data[j])
            {
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
    }

    cout<<"\nsorted elements: ";
    for(i=1; i<=n; i++)
        cout<<data[i]<<" ";
    cout<<endl;
    return 0;
}

