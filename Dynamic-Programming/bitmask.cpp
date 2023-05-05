#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();

    for(int i=0; i< (1<<n); i++)
    {
        string tmp = "";
        for(int j=0; j<n; j++)
        {
            if(i & (1 << j))    // bit is 1
                tmp += s[j];
        }
        cout << tmp << endl;
    }
}
