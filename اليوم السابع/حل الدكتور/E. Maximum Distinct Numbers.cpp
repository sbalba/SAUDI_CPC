#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdio>
#include <numeric>
#include <cstring>
#include <ctime>
#include <cstdlib>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <cmath>
#include <bitset>
#include <cassert>
#include <queue>
#include <deque>
#include <cassert>
#include <iomanip>
#include <chrono>
#include <stack>
using namespace std;

bool can(long long x, long long n){
    return (x * (x + 1)) / 2 <= n;
}

void solve(){
    long long n;
    cin >> n;
    long long l = 1, h = sqrt(2 * n);
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