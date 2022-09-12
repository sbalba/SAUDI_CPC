#include <iostream>

using namespace std;

int n, m;
string a;

int main()
{
    cin>>n>>m;
    for(int i=1; i<=n*m; i++){
        cin>>a;
        if(a=="C"||a=="M"||a=="Y"){
            cout<<"#Color";
            return 0;
        }
    }
    cout<<"#Black&White";
    return 0;
}
		 		 	  		 	  	 						 				 	