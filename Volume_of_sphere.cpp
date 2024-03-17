/*calculate volume of sphere
write a program that take the radius of sphere as inpute and calculate its volume
formula V=(4/3)pi*r^3*/
#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float Volume,r;
	float pi=3.14;
	cout<<"\nEnter radius of sphere : ";
	cin>>r;
	Volume=4*pi*r*r*r/3;
	cout<<"\nVolume of sphere = "<<Volume;
}