#include <bits/stdc++.h>
using namespace std;
int main(){
int y ;
int x ;
string s[]={"1/1","5/6","2/3","1/2","1/3","1/6"};
cin >> y >> x;
int bas=max(y,x);
cout <<s[bas-1] << "\n";
 
 return 0;
}