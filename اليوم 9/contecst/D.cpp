// LCM= a*b/gcd(a,b)
//LCM=القاسم المشترك الأكبر
//gcd=القاسم المشترك الأصغر

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sum ,n ; 
    while (cin >> sum>>n)
    {
        /* code */
    
    
    if (sum ==!n)
    break;
    vector<int> v(n);

        for (int i=0; i<n; i++){
            cin>>v[i];
            }
            set<vector<int,greater<>>>st;
        for (int mask = 0; mask < (1<<n); mask++) 
        {


            /* code */
        }
        
        }
    cout<<c<<endl;;
        
    return 0;
}