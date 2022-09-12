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
using namespace std;
const int N = 1e6 + 5;
int a[N], pr[N];

void solve(){
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
        pr[i] = pr[i - 1] + a[i];
    }
    int mn = 1e8, ans;
    for(int i = 0, j = k; j <= n; ++i, ++j){
        if(pr[j] - pr[i] < mn){
            mn = pr[j] - pr[i];
            ans = i + 1;
        }
    }
    cout << ans << endl;
}

int main(){
    int t = 1;
    while(t--)
        solve();
}
	 		 			 	  	 	  		  		 							