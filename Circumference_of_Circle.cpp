/*calculate circumference of circle
write a program that take the radius of circle as inpute and calculate its circumference
formula C=2pir*/
#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float r,pi=3.14,C;
	cout<<"\nEnter radius of circle : ";
	cin>>r;
	C=2*pi*r;
	cout<<"\nCircumference of circle = "<<C;
}