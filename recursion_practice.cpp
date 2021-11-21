#include<bits/stdc++.h>
using namespace std;

//int recur(int n)
//{
//  if(n==0)
//    return n;
//  else
//    return  n+ recur(n-1);
//}
//int fact(int n1)
//{
//
//    if(n1==1)
//        return n1;
//    else
//        return n1* fact(n1-1);
//}
//
//int main()
//{
//  int n,n1;
//  cin>>n>>n1;
//    int res= recur(n);
//    int res1= fact(n1);
//    cout<<res<<endl;
//    cout<<res1<<endl;
//
//
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//
//int fibo(int n)
//{
//    if(n==0) return 0;
//    else if(n==1) return 1;
//    else return fibo(n-1)+fibo(n-2);
//}
//int main()
//{
//   int n;
//   cin>>n;
//   for(int i=1;i<=n;i++)
//   {
//   cout<<fibo(i);
//   }
//
//
//    return 0;
//}




#include<iostream>
using namespace std;
void printDigits(int n){
    if(n<0)
        { n = -1*n;
    cout<<"- "; }
    if(n/10>0){
        printDigits(n/10);
    }
    cout<<n%10<<" ";
}
int main(){
    int n;
    cin>>n;

    printDigits(n);
}
