/* Program to find most frequent character in string */
#include<bits/stdc++.h>
using namespace std;
int main()
{

//     int arr[100];
//     for(int i=0;i<5;i++)
//        cin>>arr[i];
//     int l= sizeof(arr)/sizeof(arr[0]);
//     cout<<l<<endl;
    string str;

    cout<<"Enter a string:\n";
    getline(cin,str);


    int max = 0;
    char res;
    int size = str.length();
    for(int i = 0; i < size; i++)
    {
        int count = 0;
        /* counting frequency of each character */
        for(int j = 0; j < size; j++)
        {
            if(str[j] == str[i])
            {
                count++;
            }
        }
        if(count >  max)
        {
            max = count;
            res = str[i];
        }
    }
    cout<<"The most frequent character of the string is "<<res;


}
