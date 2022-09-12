#include<bits/stdc++.h>
using namespace std;
int n,m,a,b; 
int main(){
	cin>>n>>m>>a>>b;
	if(b>a*m) cout<<n*a;
	else{
		//cout<<;
		if(n%m*a>b) cout<<n/m*b+b;
		else cout<<n/m*b+n%m*a;
	}	
	return 0;
}

 	 		  	   	 	 	   	     	