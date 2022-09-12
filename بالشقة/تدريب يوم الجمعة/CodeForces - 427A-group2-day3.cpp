#include <bits/stdc++.h>
using namespace std;
const int n = 150000;

int main (){



int a,b,count=0,d=0;
  cin>>a;
for (int i=0;i<a;i++){
  cin>>b;
   

   if(b == -1){
  	

	  if(d==0)
     count++;
     else
     d--;

  

 // cout<<count<<"\n";
 }
 else{
 	d+=b;
 	
 }
 


}
cout<<count<<"\n";


return 0;}