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

int fr[26];
void solve(){
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i)
        ++fr[s[i] - 'a'];
    int cnt = 0;
    for(int i = 0; i < 26; ++i)
        cnt += fr[i] != 0;//if(fr[i]>0)++cnt;  
    if(cnt % 2 == 0) cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

}

int main(){
    int t = 1;
//    cin >> t;
    while (t--){
        solve();
    }
}
			  	 	 		   	 		  	 	    	 		