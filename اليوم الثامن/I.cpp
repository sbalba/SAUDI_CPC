#include<bits/stdc++.h>
#define int long long
using namespace std;
int t,a,b;
inline int isprime(int x){
	for(int i=2;i*i<=x;i++)
		if(x%i==0)return 0;
	return 1;
}
signed main(){
	cin>>t;
	while(t--){
		cin>>a>>b;
		if(a-b>1||!isprime(a+b))cout<<"No\n";
		else cout<<"Yes\n";
	}
}