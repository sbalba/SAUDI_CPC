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
    string a[4];
    for(int i = 0; i < 4; ++i)
        cin >> a[i];
    
    bool flag = false;
    for(int i = 0; i <= 2 && !flag; ++i){
        for(int j = 0; j <= 2 && !flag; ++j){
            int cnt = 0;
            cnt += (a[i][j] == '#');
            cnt += (a[i][j + 1] == '#');
            cnt += (a[i + 1][j] == '#');
            cnt += (a[i + 1][j + 1] == '#');
            if(cnt != 2)
                flag = true;
        }
    }
    if(flag)
        cout << "YES";
    else
        cout << "NO";
}

int main(){
    int t = 1;
//    cin >> t;
    while (t--){
        solve();
    }
}
  				  			    		 	  	   		  		