#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,tune=native")
#pragma GCC optimize("unroll-loops")
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

int getSum(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}

int getStringSum(string s){
    int sum = 0;
    for(int i = 0; i < s.size(); ++i){
        sum += (s[i] - '0');
    }
    return sum;
}

void solve(){
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int ans = 0;
    for(int x = 0; x <= n; ++x){
        for(int y = 0; y <= n; ++y) {
            if (x * a + y * b > n)
                break;
            int z = (n - x * a - y * b) / c;
            if (x * a + y * b + z * c == n) {
                ans = max(ans, x + y + z);
            }
        }
    }
    cout << ans;
}

int main(){
    int t = 1;
//    cin >> t;
    while (t--){
        solve();
    }
}
  	 	/*
		   
		   
		   الحل الأمثل
		   
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

int getSum(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}

int getStringSum(string s){
    int sum = 0;
    for(int i = 0; i < s.size(); ++i){
        sum += (s[i] - '0');
    }
    return sum;
}

void solve(){
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int ans = 0;
    for(int x = 0; x * a <= n; ++x){
        for(int y = 0; x * a + y * b <= n; ++y) {
            int z = (n - x * a - y * b) / c;
            if (x * a + y * b + z * c == n) {
                ans = max(ans, x + y + z);
            }
        }
    }
    cout << ans;
}

int main(){
    int t = 1;
//    cin >> t;
    while (t--){
        solve();
    }
}
      			  			 							 			  	 	*/	      		  	 	    				 	 	