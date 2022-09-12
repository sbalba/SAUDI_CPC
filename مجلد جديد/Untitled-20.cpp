#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long mn = 10000ll*10000*10000;
    for (long long l=2;l<=10;l+=2)
    for (long long i=0;i<=(1<<l);i++)
    {
        long long s = 0;
        for (long long k=0;k<l;k++)
        {
            if (i & (1<<k))
                s = s * 10 + 4;
            else
                s = s * 10 + 7;
        }
        if (s >= n && __builtin_popcount(i) * 2 == l)
            mn = min(mn,s);
    }
    
    cout<<mn<<endl;
}