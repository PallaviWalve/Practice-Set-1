/*calculate area of circle
write a program that take the radius of circle as inpute and calculate its area
formula A=pi*r^2*/
#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float area,r;
	float pi=3.14;
	cout<<"\nEnter radius of circle : ";
	cin>>r;
	area=pi*r*r;
	cout<<"\nArea of circle = "<<area;
}