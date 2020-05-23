#include<bits/stdc++.h>
using namespace std;
int i,a[20];
int partion(int a[], int p, int q)
{
    int pivot=a[p];
    cout<<"pivot: "<<pivot<<" "<<endl;
    int i=p,j=q;
    while(1)
    {
        while(a[i]<=pivot)
            i++;
          //  cout<<i<<endl;
             while(a[j]>pivot)
            j--;
 //cout<<j<<endl;
            if(i<j)
            {
                swap(a[i],a[j]);
                i++;
                j--;
            }

            else
                {
                swap(a[j],a[p]);
                return j;
            }

    }

}
int quick_sort(int a[], int p, int q)
{
    int r;
    if(p<q)
    {
       r=partion(a,p,q);
        //cout<<r<<endl;
        quick_sort(a,p,r-1);
        quick_sort(a,r+1,q);
    }
    return 0;
}
int main()
{
    int a[20],i,n;
    cout<<"enter a number: ";
    cin>>n;
    cout<<"enter a elements: ";
    for(i=1; i<=n; i++)
        cin>>a[i];
    quick_sort(a,1,n);
    printf("the sorted array is\n");
    for(i=1; i<=n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}


