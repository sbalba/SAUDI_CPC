#include <bits/stdc++.h>
    using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int t;
  long long n;
  cin>>t;
  while(t--) {
    cin>>n;
    while(n%2==0){

    
    n/=2;
    }
  cout<<(n==1 ? "NO":"yes")<<"/n";
  }
  
    
    return 0;
}