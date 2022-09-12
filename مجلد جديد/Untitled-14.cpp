#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int b=0;
string s1,s2 ;
cin >> s1 >>s2 ;
for(int i=0;i<s1.length();i++){
    for(int j=0;j<s2.length();j++){

        if(s1[i]==s2[j]){
            b++;

    }
}
}
if(b>0){


    cout << "YES" <<endl;
    b=0;}
    else
    cout << "NO" << endl;
}}