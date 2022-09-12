#include <bits/stdc++.h>
using namespace std;
int main(){
int a;
cin >> a;
unordered_map<string,int>mp;

	string	s;
int d;
for(int i=0;i<a;i++){

cin>>s;
if (mp[s] ==0){
    cout<<"OK"<<endl;
    mp[s]++ ;

}
else if (mp[s] >0){

    cout<<s<<mp[s]<<endl;
    mp[s]++;
}

}	







  

 
 return 0;
}