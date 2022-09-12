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
int a[N], pr[N];
void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n + 1; ++i)
        pr[i] = 0;

    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    int q;
    cin >> q;
    while (q--) {
        int l, r, x;
        cin >> l >> r >> x;
        pr[l] += x, pr[r + 1] -= x;
    }
    for (int i = 1; i <= n; ++i)
        pr[i] = pr[i - 1] + pr[i];
    for (int i = 1; i <= n; ++i)
        cout << a[i] + pr[i] << " ";

}

int main() {
    solve();
}