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
int a[N], mn[N];
void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    mn[n + 1] = 1e9;
    for (int i = n; i > 0; --i) {
        if (a[i] < mn[i + 1])
            mn[i] = a[i];
        else
            mn[i] = mn[i + 1];
    }
    for (int i = 1; i <= n; ++i)
        cout << mn[i] << " ";

}

int main() {
    solve();
}