#include <bits/stdc++.h>
using namespace std;

int f(int n) {
  int cnt = 0;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      while (n % i == 0) n /= i;
      cnt++;
    }
  }
  if (n > 1) cnt++;
  return cnt;
}

int main() {


  int n;
  cin >> n;
  int cnt = 0;
  for (int i = 1; i <= n; i++) {
    if (f(i) == 2) cnt++;
  }
  cout << cnt << endl;
}

     			      	 	  		     	  	