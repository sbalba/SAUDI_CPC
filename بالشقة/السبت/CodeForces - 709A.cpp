#include <bits/stdc++.h>
using namespace std;
int main(){
int n,b,d,bas,sum;
  cin>>n>>b>>d;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]<b){
    sum+=a[i];
     if(sum>=d){
	 
    bas++;
sum=0;
    }
}




  }
    cout<<bas<<endl;

 
}