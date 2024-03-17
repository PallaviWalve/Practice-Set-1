/*calculate area of Right angle triangle
write a program that take the base and height of right angle triangle as inpute and calculate its area
formula A=(1/2)b*h*/
#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float area,base,height;
	cout<<"\nEnter base and height of right angle triangle : ";
	cin>>base>>height;
	area=1*base*height/2;
	cout<<"\nArea of circle = "<<area;
}