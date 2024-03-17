/*calculate surface area of sphere
write a program that take the radius of sphere as inpute and calculate its surface area
formula SA=4pi*r^2*/
#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float surface_area,r;
	float pi=3.14;
	cout<<"\nEnter radius of surface : ";
	cin>>r;
	surface_area=4*pi*r*r;
	cout<<"\nArea of area of sphere = "<<surface_area;
}