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

bool can2(int x, int idx, vector<int> &a){
    return a[idx] < x;
}

int lower_than(vector<int> &a, int x){
    int l = 0, h = a.size() - 1, ans = -1;
    while(l <= h){
        int mid = (l + h) / 2;
        if(can2(x, mid, a)){
            ans = a[mid];
            l = mid + 1;
        }else{
            h = mid - 1;
        }
    }
    return ans;
}

bool can(int x, int idx, vector<int> &a){
    return a[idx] > x;
}


int upper_bound(vector<int> &a, int x){
    int l = 0, h = a.size() - 1, ans = -1;
    while (l <= h){
        int mid = (l + h) / 2;
        if(can(x, mid, a)){
            ans = a[mid];
            h = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return ans;
}

void solve(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a.begin(), a.end());
    int q;
    cin >> q;
    while(q--){
        int x;
        cin >> x;
        int bigger = upper_bound(a, x);
        int smaller = lower_than(a, x);
        if(smaller == -1)
            cout << "X ";
        else
            cout << smaller << " ";
        if(bigger == -1)
            cout << "X" << endl;
        else
            cout << bigger << endl;
    }
}

int main(){
    solve();
    return 0;
}