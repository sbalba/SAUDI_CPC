#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#include <iostream>
 
using namespace std;
 
int main(){
    string a, b; cin >> a; cin >> b;
    for(int i = 0; i < a.length(); ++i){
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }
    if(a > b){
        cout << 1;
    }
    else if(a < b){
        cout << -1;
    }
    else if (a == b){
        cout << 0;
    }
    return 0;
}