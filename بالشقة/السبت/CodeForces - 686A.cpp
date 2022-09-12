#include <bits/stdc++.h>
using namespace std;
int main(){
 long long int a,b,sum,d=0,bas;
char k;
  cin>>a>>b;
  sum=sum+b;
  while (a){
  a--;
  cin>>k>>b;
  
  
  if(k=='-'){
 bas =sum-b;
  if(bas<0){
  
  d++;
}
else
sum=sum-b;

  }
  
  else if(k=='+'){
  
  sum=sum+b;
}
  }


 cout<<sum<<" "<<d<<endl;






  

 
 return 0;
}