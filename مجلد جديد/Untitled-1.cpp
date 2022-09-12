#include <iostream>
using namespace std;
//basil

int main() {
string s;
int bas = 0,d=0;
cin >> s;

for (int i = 0; i < s.length(); i++) {
    if (s[i] == "("){
        d++;


    }
        if(s[i] == ")"&&d >= 0){
            bas++;

}
cout <<bas;

    
}