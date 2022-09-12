#include <iostream>
using namespace std;

int main() {
	int a,b,c,d,sum=0;
	cin>>a>>b>>c>>d;
	string str;
	cin>>str;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]=='1')
		{
			sum+=a;
		}
		else if(str[i]=='2')
		{
			sum+=b;
		}
		else if(str[i]=='3')
		{
			sum+=c;
		}
		else if(str[i]=='4')
		{
			sum+=d;
		}
		
	}
	cout<<sum;

	return 0;
}
 	  		 	    	 			 	  		 	 		 	