#include <bits/stdc++.h>
using namespace std;
int a[500000];
int b[500000];
int n,k;
int main() {


		
		string s;
        int bas=0,nas=0,o=0,p=0;

		cin>>s;
        for (int i=0;i<s.size();i++){
            if(s[i]=='('){
            	
                o++;
                

            }
            else if(s[i]==')' ){
                if(o){
                    bas+=2;
                    --o
					;
                    
                }
                

}
       }
      cout<<bas;
    
		



    }