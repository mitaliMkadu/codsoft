#include<iostream>
#include<math.h>
using namespace std;

class calculator
{
	int x,y,z;
	
	public:
		void addition()
		{
			cout<<"\nEnter the numbers :) ";
			cin>>x>>y;
			z = x + y ;
			cout<<"\nThe addition of the given numbers is : "<<z;
		}
		
		void substraction()
		{
			cout<<"\nEnter the numbers :) ";
			cin>>x>>y;
			z = x - y ;
			cout<<"\nThe substraction of the given numbers is : "<<z;
		}
		
		void multiplication()
		{
			cout<<"\nEnter the numbers :) ";
			cin>>x>>y;
			z = x * y ;
			cout<<"\nThe multiplication of the given numbers is : "<<z;
		}
		
		void division()
		{
			cout<<"\nEnter the numbers :) ";
			cin>>x>>y;
			z = x / y ;
			cout<<"\nThe Division of the given numbers is : "<<z;
		}
		
		void squareroot()
		{
			cout<<"\nEnter the number :) ";
			cin>>x;
			float z = sqrt(x);
			cout<<"\nThe square root of the given numbers is : "<<z;
		}		
};

int main()
{
	int ch;
	
	calculator c;
		
	do
	{
		cout<<"\nOperations";
		cout<<"\n1.addition";
		cout<<"\n2.substraction";
		cout<<"\n3.multiplication";
		cout<<"\n4.division";
		cout<<"\n5.squareroot";
		cout<<"\n6.exit";
		cout<<"\nEnter the choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				c.addition();
				break;
				
			case 2:
				c.substraction();
				break;
				
			case 3:
				c.multiplication();
				break;
				
			case 4:
				c.division();
				break;
				
			case 5:
				c.squareroot();
				break;
				
			case 6:
				exit(0);
		}
	}while(ch!=7);
	
	return 0;
}
