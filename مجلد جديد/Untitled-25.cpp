#include <bits/stdc++.h>
 using namespace std;
 
int a[300001];
 
int main(){
	int ans=0,n,k,pi,pj; cin>>n>>k;
	for(int i=1;i<=n;++i)cin>>a[i];
	for(int i=1,j=0,cnt=0;i<=n;cnt-=!a[i++]){
		while(cnt<=k&&j<=n)cnt+=!a[++j];
		if(j-i>ans)ans=j-i,pi=i,pj=j;
	}
	cout<<ans<<endl;
	for(int i=1;i<=n;++i){
	
	int bas =(a[i]||(i>=pi&&i<pj));
		cout<<bas<<" ";
}}