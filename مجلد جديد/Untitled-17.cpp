#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<char> c;
  char b[101];
  for (int i = 0; i < n; i++){

    cin >> b[i];
  }
  for (int i = 0; i < n; i++){
  if(b[i] <=90)
  b[i]+=37;


c.push_back(b[i]);

  }
  for (int i = 97; i < 123; i++){
    int num=0;
    char a;
    a=i ;
    num = (c.begin() , c.end() ,a) ;
    if(num == 0)
    cout << "NO";
    
    if(i==122)
    cout << "YES";


}}