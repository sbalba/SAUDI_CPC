#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    int counter = 0;
    int x = 11;
    if(s.length() < 2){
        cout << 0;
        return 0;
    }
    while(x >= 10){
        x = 0;
        for(int i = 0; i < s.length(); ++i){
            x = x + (s[i] - '0');
        }
        s = to_string(x);
        counter++;
    }
    cout << counter << endl;
    return 0;}