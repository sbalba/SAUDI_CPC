#include<iostream>
#include<algorithm>
#include<memory.h>
#define int long long
using namespace std;

main()
{
    int n;
    cin>>n;
    int mn = 10000ll*10000*10000;
    for (int l=2;l<=10;l+=2)
    for (int i=0;i<=(1<<l);i++)
    {
        int s = 0;
        for (int k=0;k<l;k++)
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