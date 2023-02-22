#include <bits/stdc++.h>
using namespace std;


bool isPrime[20000005];

void sieve()
{
    memset(isPrime, true, sizeof(isPrime));
    int i,j;
    for(i=4;i<=20000000;i+=2)
    {
        isPrime[i]=false;
    }
    for(i=3; i*i<=20000000; i+=2)
    {
        if(isPrime[i]==true)
        {
            for(j=i*i;j<=20000000;j+=i+i)
            {
                isPrime[j]=false;
            }
        }
    }
}


