#include <bits/stdc++.h>
using namespace std;

unordered_multiset<string>c,d;
int main()
{
    int a,b;
	 cin >> a>>b;
	 if(a<b){
     cout <<"NO"<<endl;
     return 0;}
    else{
    string s;
    for (int i=0; i<a; i++){
    cin >> s;
    c.insert(s);
    }
    for (int i=0; i<b; i++){
        cin >> s;
        d.insert(s);
    }
    for(const auto& word : d){
        auto found = c.find(word);
        if(found!=a.end()){
    
    cout<<"No";
    return 0;
        }   
        magazine.erase(found);
    }
    cout<<"Yes";
}}