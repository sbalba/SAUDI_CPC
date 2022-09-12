#include<iostream>
using namespace std;
 
void solve(int t){
    int x,y,z,s=0;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y >> z;
        if (x+y+z >=2){
            s++;
        }
    }
    cout << s << endl;
}
 
 
int main(){
int t;
cin >> t;
t;
solve(t);
}
 						  					 				 	 		  		