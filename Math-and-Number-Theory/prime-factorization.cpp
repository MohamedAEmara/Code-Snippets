#include <bits/stdc++.h>
using namespace std;

map<int,int>factors;

void primeFactorization(int n)
{
    while(n % 2 == 0)
    {
        factors[2] ++;
        n /= 2;
    }

    for(int i=3; i*i<=n; i++)
    {
        while(n % i == 0)
        {
            factors[i] ++;
            n /= i;
        }
    }

    if(n > 2)
        factors[n] ++;
}

