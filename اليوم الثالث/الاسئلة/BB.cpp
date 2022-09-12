#include <iostream>
using namespace std;
int a[500000];
int b[500000];
int n,k;
int main() {
    ios::sync_with_stdio(false);
    cin >> n>> k;
    for(int i=1;i<=n;i++)cin >> a[i];
    for(int i=1;i<=n;i++)b[i]=b[i-1]+a[i];
    int p=0;
    for(int i=1;i<=n-k;i++)if(b[i+k]-b[i]<b[p+k]-b[p])p=i;
    cout << p+1;
}