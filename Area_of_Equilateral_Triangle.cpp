/*calculate area of equilateral triangle
write a program that take the side of quivalateral triangle as inpute and calculate its area
formula A=(root3/4)*s^2*/
#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float area,s;
	cout<<"\nEnter side of equilateral triangle : ";
	cin>>s;
	area=(sqrt(3)/4)*(s*s);
	cout<<"\nArea Equilateral Triangle = "<<area;
}