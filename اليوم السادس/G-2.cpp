#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
	 cin >> a;
	 while(a--)
	 
    {
        string b,c;
		 cin >> b >> c;
		  map <char,int> k; 
        for (int y=0;y<b.length(); y++)
		 k[b[y]]=1; int counter=0; 
        for (int y=0;y<c.length(); y++) 
        {
            if (k[c[y]]) counter=1; 
        }
        if (counter) cout << "YES" << '\n';
        else cout << "NO" << '\n'; 
    }return 0; 
}