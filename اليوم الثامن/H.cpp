#include <bits/stdc++.h>
    using namespace std;
int main() {
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   long long x,y,bas,ans;
   cin>>y;
   x=1378;
  bas=pow(x, y);
  ans=bas%10;

    cout<<bas;
    return 0;
}