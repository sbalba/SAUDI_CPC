#include <bits/stdc++.h>

using namespace std;

int main(){
int n,a,b,c,sum,z,rem;
cin>>n>>a>>b>>c;
sum=0;
for(int i=0;i<=n;i++){
	
	
	for(int j=0;j<=n;j++){
		rem=n-i*a-j*b;
 if(  rem%c==0){
                      z=rem/c;
                sum=max(sum,i+j+z);}
			
		
	}
}  
  cout << sum;
    return 0;}