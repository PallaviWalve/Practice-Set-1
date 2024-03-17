/*calculate area of Rectangle
write a program that take the length and width of rectangle as inpute and calculate its area
formula A=length*width*/
#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float area,length,width;
	cout<<"\nEnter length and width of rectangle : ";
	cin>>length>>width;
	area=length*width;
	cout<<"\nArea of Rectangle = "<<area;
}