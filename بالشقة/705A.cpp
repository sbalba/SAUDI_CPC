#include <iostream>
using namespace std;
int a[500000];
int b[500000];
int n,k;
int main() {
int n,bas;
cin >> n ;
    for (k = 1; k <= n; k++) {

        
        bas = k%2;

        if(bas==1)cout <<"I hate ";
        else if(bas==0)cout <<"I love ";

        if(k<n)cout <<"that ";
        else cout <<"it";



    
        
}}
