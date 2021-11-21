#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

       ///normal sieve function.........

#define sizep 1000010
int isprime[sizep];
void sieve()
{
//    for(int i=1; i<=sizep; i++)
//        isprime[i]=0;
    isprime[1]=1;
      isprime[2]=0;
    for(int i=4; i*i<=sizep; i++)
    {
        if(isprime[i]==0)
        {
            for(int j=i*i; j<=sizep; j+=(i+i))
                isprime[j]=1;
        }
    }
}
      ///sieve function using vector.........


#define sz 10000000
bool isPrime[sz+5];
vector < int > v,prime;
void sieve()
{
    for(int i = 2; i <=sz; ++i)
    {
        isPrime[i] = true;
    }

    for(int i = 2; i * i <=sz; ++i)
    {
        if(isPrime[i] == true)
        {
            for(int j = i*i ; j <=sz; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    prime.push_back(2);
    for (int i = 3; i <= sz; i+=2)
    {
        if (isPrime[i] ==true)
        {
            prime.push_back(i);
        }
    }
    for(int i=0; i<prime.size(); i++)
    {
        printf("%d\n",prime[i]);
    }
}
         ///Prime Factors..........


void prime_factors(int n)
{

    int num=sqrt(n);
    for (i=0; prime[i]<=num; i++)
    {

        while (n%prime[i]==0)
        {
            printf("%d",prime[i]);
            n /= prime[i];

        }
    }
    if (n>1)
        printf("%d\n",n);
}
         ///Divisors..........

int divisor(int N)
{
    int i,val,count,sum;
    val=sqrt(N)+1;
    sum=1;
    for(i=0; prime[i]<val; i++)
    {
        if(N%prime[i]==0)
        {
            count=0;
            while(N%primes[i]==0)
            {
                N/=primes[i];
                count++;
            }
            sum*=(count+1);
        }
    }
    if(N>1)
        sum=sum*2;
    return sum;
}
        ///Sum_Of_Divisor..........

int Sum_Of_Divisor(int N)
{
    int i,val,count,sum,p,s;
    val=sqrt(N)+1;
    sum=1;
    for(i=0; primes[i]<val; i++)
    {
        if(N%primes[i]==0)
        {
            p=1;
            while(N%primes[i]==0)
            {
                {
                    N/=primes[i];
                    p=p*primes[i];
                }
                p=p*primes[i];
                s=(p-1)/(primes[i]-1);
                sum=sum*s;
            }
        }

        if(N>1)
        {
            p=N*N;
            s=(p-1)/(N-1);
            sum=sum*s;
        }
        return sum;
    }

          ///GCD........
ll gcd(ll a,ll b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
    /// bulid in X=_ _ gcd(a,b);

       ///common Divisors......

ll common_divisors(ll a,ll b)
{
  ll n = gcd(a, b);
    ll result = 0;
    for (ll i=1; i<=sqrt(n); i++)
    {

        if (n%i==0)
        {
          if (n/i == i)
                result += 1;
            else
                result += 2;
        }
    }
    return result;
}
           ///Big_MOD()
ll big_mod(ll a,ll b,ll m)
{
    if(b==0) return 1;
    ll ans;
    if(b%2==1)
    {
        ans=((a%m)*(big_mod(a,b-1,m)%m))%m;
        return ans;
    }
    else
        {
            ans=big_mod(a,b/2,m);
          ans=(ans*ans)%m;
        return ans;
        }
        }
        int main()
        {
            sieve();
            prime_factors(n);
            divisor(n);
            Sum_Of_Divisor(n);
            GCD(a,b);
            common_divisors(a,b);
            BigMOD(a,b,m);

            return 0;
        }
