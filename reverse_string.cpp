#include<bits/stdc++.h>

using namespace std;

int main()

{
//    string str;
//  getline(cin,str);
//  reverse(str.begin(),str.end());
//  cout<<str;

//  char str[100],i,j,k=0;
//  gets(str);
//   int l=strlen(str);
//
//   for(i=l-1;i>=0;i--)
//    cout<<str[i] ;
//  cout<<endl;


  char str[100],temp[100],i,j,k,be,en,st[100],n;

  gets(str);

   int l=strlen(str);

   for(i=l-1,j=0;i>=0;i--,j++)
 {
     temp[j]=str[i];

 }

 int m=0,ch=0;
        for(i=0;i<l;i++)
        {

                 if(temp[i]==' ')
                {

                         for(be=0,en=ch-1; be<(ch/2) ; be++,en--)
                         {
                                   swap(temp[en],temp[be]);


                         }

                         for(n=0;n<ch;n++)
                         {
                             cout<<temp[n];

                         }
                  cout<<" ";
                          ch=0;

                }
                else{
                    ch++;

                }


         }



    return 0;
}

