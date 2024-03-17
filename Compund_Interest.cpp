/*find compound interest
write a program to take principle amount,interest rate,compounding frequency and time period as input and calculate
the compound interest
SI=P*R*T*/

#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float A, P,T,R,CI;
	cout<<"\nEnter Principle amount , Rate of Interest and Time period :";
	cin>>P>>R>>T;
	 A = P * ((pow((1 + R / 100), T)));
     CI = A - P;
	cout<<"\nCompund Interest = "<<CI;
}