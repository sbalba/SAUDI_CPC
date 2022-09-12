#include <bits/stdc++.h>
using namespace std;

int main()
{
 int n;
 cin >>n;
 string s;
 cin>>s;
 transform(s.begin(), s.end(), s.begin(),::tolower);
 set<char> set;
 for(int i=0;i<n; i++)
 set.insert(s[i]);

 if(set.size()==26)
 cout<<"YES"<<endl;
 else
 cout<<"NO"<<endl;


}