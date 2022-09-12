#include <iostream>
using namespace std;

int main ()
{
    int n,i,a,d;
    string ch;

    
        a = 0;
        d = 0;
cin>>n;
        for (i=1; i<=n; i++)
        {
            cin >> ch;

            if (ch == "Tetrahedron")
                a+=4;
            else if(ch == "Cube")
                a+=6;
                else if(ch=="Octahedron")
                a+=8;
                else if(ch=="Dodecahedron")
                a+=12;
                else if(ch == "Icosahedron")
                a+=20;
        
		}
n--;
        
    
cout<<a<<endl;
    return 0;
}
		 									     		 	 					 		