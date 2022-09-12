#include <iostream>
using namespace  std;

int main () {
int i,q;
int d=0;
int x,y,z;
cin>>q;
while(q){
	q--;
cin>>x>>y>>z;
if (x==1&&y==1||x==1&&z==1||y==1&&z==1||x==1&&y==1&&z==1){
d++;
}
}
cout<<d<<endl;

}
				   	 	   	 	  			  	   	  	