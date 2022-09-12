#include <iostream>
using namespace std;
//basil

int main() {
string s;
int bas = 0,d=0;
cin >> s;

for (int i = 0; i < s.length(); i++) {
    if (s[i] == '('){
    	
        d=d+1;  
		cout<<d<<endl;
		}
		   
		   
        if(s[i] == ')'&&d >= 0){ ;d--; }}
            
cout <<d;}