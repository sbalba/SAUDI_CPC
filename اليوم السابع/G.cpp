#include <bits/stdc++.h>
using namespace std;
int main()
{
  
int n,b,max=0;
cin >> n;
 char c;
for (int i = 0; i < n; i++)
{
    cin >> c;
    if (c == '0')
    b=0;

    else
    {
        b++;
        if (b > max)
        max=b;
    }

    
}

    cout<<max;

    }
    