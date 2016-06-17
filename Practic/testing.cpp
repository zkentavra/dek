#include <iostream>;
#include <math.h>;
#include <stdio.h>;
using namespace std;
int main (){
float a,b,c,D,x,x1,x2;
cout<< "Vvedit b"<< endl;
cin>>b;
cout<< "Vvedit a"<< endl;
cin>>a;
cout<< "Vvedit c"<< endl;
cin>>c;

D=(b*b)-(4*a*c);
cout<<"Deskriminan dorivniye"<<endl;
cout<<D<<endl;

if(D>0)
{ cout <<"rivniannia mae dva rozviazki"<< endl;
 x1=(-b+(sqrt((b*b)-(4*a*c))))/(2*a);
 x2=(-b-(sqrt((b*b)-(4*a*c))))/(2*a);
 cout<<"x1 ="<< x1<< endl;
 cout<<"x2 ="<<x2<<endl;
}
	if (D<0)
	{
	
	cout<<"Nema rozviazky"<<endl;
 	}
		 if(D==0)
		 {cout<<"rivniannia mae odin rozviazok"<<endl;
		 
			x=(-b)/2*a;
			cout<<"x="<<x <<endl;
		}


	return 0;
}  

