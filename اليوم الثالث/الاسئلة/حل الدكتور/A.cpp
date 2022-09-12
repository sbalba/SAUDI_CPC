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
const int N = 1e5 + 5;

void solve(){
    string s = "Timur";
    string s2;
    int n;
    cin >> n;
    cin >> s2;
    if(s2.size() != s.size()){
        cout << "NO\n";
        return;
    }
    int fr[255];
    for(int i = 0; i < 255; ++i)
        fr[i] = 0;
    for(int i = 0; i < s2.size(); ++i)
        ++fr[s2[i]];
    bool flag = true;
    for(int i = 0; i < s.size(); ++i){
        if(fr[s[i]] != 1)
            flag = false;
    }
    if(flag)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
	  	   	 	 		  		     			 	 			