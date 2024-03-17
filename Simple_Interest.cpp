/*find simple interest
write a program to take principle amount,interest rate and time period as input and calculate
the simple interest
SI=P*R*T*/

#include<iostream>
using namespace std;
main()
{
	int P,T;
	float R,SI;
	cout<<"\nEnter Principle amount , Rate of Interest and Time period :";
	cin>>P>>R>>T;
	SI=P*R*T;
	cout<<"\nSimple Interest = "<<SI;
}