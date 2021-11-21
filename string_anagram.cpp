

#include<bits/stdc++.h>
using namespace std;

int main()
{


//     for(int i=99;i>=3;i-=3)
//     {
//         cout<<i;
//     }
    string s1,s2;
    cin>>s1>>s2;

    int len1=s1.size();
    int len2=s2.size();

    if(len1!=len2)
        cout<<"not anagram"<<endl;

    else
    {

        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
      // cout<<s1<<" "<<s2<<endl;
        for(int i=0; i<len1; i++)
        {
            if(s1!=s2)
            {
                cout<<"not anagram"<<endl;
                break;
            }
        }

    }
    cout<<"anagram"<<endl;
    return 0;
}






