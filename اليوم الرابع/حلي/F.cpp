#include <bits/stdc++.h>
using namespace std;
int a[500000];
int b[500000];
int n,k;
int main() {
	int d;
	cin>>d;
	while(d--){
	
    
    string bas;
	cin >>bas;
    
	for (int i = 0; i <3; i++) {
		
        n+=bas[i];
       k+=bas[i+3];}
       
    if(n==k){
	cout<<"yes"<<endl;
	n=0;
	k=0;

	}
    else{
        cout<<"no"<<endl;
        k=0;
        n=0;

    }}
    }