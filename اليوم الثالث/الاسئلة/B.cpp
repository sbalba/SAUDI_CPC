#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <cctype>
#include <set>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <string>
#include <vector>
#include <map>
#include <iomanip>
#include <ctime>
#pragma warning (disable : 4996)
#define mem(a) memset(a, 0, sizeof(a))
#define dou double
#define LL long long
#define N 511111
#define Mod 1000000007
#define sl(a) strlen(a)
#define eps 1e-8
#define inf 1000000000
using namespace std;

int a[N];

int main() {
    int n, t, ca = 1, i, j, k, cnt, re, sum, tem, id = 0;
    //freopen("in,txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin >> n >> k;
    for (i = 0; i < n; ++i) cin >> a[i];
    for (i = sum = 0; i < k; ++i) sum += a[i];
    for (i = 1, tem = sum; i <= n - k; ++i) {
        tem += a[i + k - 1] - a[i - 1];
        if (sum > tem) id = i, sum = tem;
    }
    cout << id + 1 << endl;

    return 0;
}