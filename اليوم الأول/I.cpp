#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int u=0,l=0;
    string str;
    cin>>str;
    for (int i = 0 ; i < str.length() ; i++){
    	if (isupper(str[i]))
    		u++;
    	else
    		l++;
	}
	if (u > l)
		for (int i = 0 ; i < str.length() ; i++)
    		str[i] = toupper(str[i]);

	else if (u < l)
		for (int i = 0 ; i < str.length() ; i++)
    		str[i] = tolower(str[i]);
    		
	else 
		for (int i = 0 ; i < str.length() ; i++)
    		str[i] = tolower(str[i]);
    cout<<str;
    return 0;
}

			 			 				 				  		 		 	 	 	