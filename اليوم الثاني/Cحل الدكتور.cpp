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
        sum += (int)(s[i] - '0');
    }
    return sum;
}

void solve(){
    string s;
    cin >> s;
    if(s.size() == 1){
        cout << 0;
        return;
    }
    int cnt = 1;
    int currSum = getStringSum(s);
    while (currSum > 9){
        currSum = getSum(currSum);
        ++cnt;
    }
    cout << cnt;
}

int main(){
    int t = 1;
//    cin >> t;
    while (t--){
        solve();
    }
}
		 		    	 	 	   		  					