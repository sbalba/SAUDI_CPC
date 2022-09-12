
//first anwer A

  #include <bits/stdc++.h>
   using namespace std;


int main(){

   string str,b ;
   cin>>str>>b;
    
    reverse(str.begin(), str.end());
	 if(str==b){
	 
	cout<<"YES"<<endl;
	}
else if (str!=b){
	cout<<"NO"<<endl;
	}
	   return 0;



}