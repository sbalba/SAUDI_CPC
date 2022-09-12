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
int pr[26][N];

void solve() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        pr[s[i] - 'a'][i + 1] = 1;
    }
    for (int i = 0; i < 26; ++i) {
        for (int j = 1; j <= s.size(); ++j)
            pr[i][j] += pr[i][j - 1];
    }
    int q;
    cin >> q;
    while (q--) {
        int l, r;
        char c;
        cin >> l >> r >> c;
        cout << pr[c - 'a'][r] - pr[c - 'a'][l - 1] << endl;
    }
}

int main() {
    solve();
}