#include <bits/stdc++.h>  
using namespace std;
 
bool can(long long x, long long n){
    return (x + (x + 1));
}
 
void solve(){
    long long n;
    cin >> n;
    long long l = 0, h =  n;//I think must be h= n+1;
    long long ans = 0;
    while(l <= h){
        long long mid = (l + h) / 2;
        if(can(mid, n)){
            ans = mid;
            l = mid + 1;
        }else{
            h = mid - 1;
        }
    }
    cout << ans << endl;
}
 
int main(){
    ios_base::sync_with_stdio( 0 );
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}

    }
    