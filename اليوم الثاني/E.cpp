#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
char mps[5][5];
void solve(){
	for(int i=1;i<=4;i++){
		for(int j=1;j<=4;j++){
			cin>>mps[i][j];
		}
	}
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
			int cnt=0;
			if(mps[i][j]=='#') cnt++;
			if(mps[i][j+1]=='#') cnt++;
			if(mps[i+1][j]=='#') cnt++;
			if(mps[i+1][j+1]=='#') cnt++;
			if(cnt==1||cnt==3||cnt==0||cnt==4){
				cout<<"YES";
				return;
			}
		}
	}
	cout<<"NO";
	return;
}
int main(){
	
	solve();
	return 0;
}
					 					     		 	   	   		 	