/*calculate area of square
write a program that take the side length of square as input and calculate its area
formula A=s^2*/
#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float area,s;
	cout<<"\nEnter side length of square : ";
	cin>>s;
	area=s*s;
	cout<<"\nArea of square = "<<area;
}