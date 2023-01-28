#include <bits/stdc++.h>
using namespace std;


int main()
{

    // Longest Increasing Subsequence 

    int MAX = 2005;
    int arr[MAX];
    int LIS[MAX];
    int n;
    LIS[n] = 1;
    for(int i=n-1; i>=1; i--)
    {
        int mx = 1;
        for(int j=i; j<=n; j++)
        {
            if(arr[j] > arr[i])
                mx = max(mx, 1 + LIS[j]);
        }
        LIS[i] = mx;
    }

    int longest_increasing_subsequnce = *max_element(LIS, LIS+n+1); // as n is a zero based

}