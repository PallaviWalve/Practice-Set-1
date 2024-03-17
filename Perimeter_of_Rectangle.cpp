/*calculate perimeter of rectangle
write a program that take the length and width of rectangle as inpute and calculate its perimeter
formula P=2l+2w*/
#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int length,width,perimeter;
	cout<<"\nEnter length and width of rectangle : ";
	cin>>length>>width;
	perimeter=2*length+2*width;
	cout<<"\nPerimeter of Rectangle = "<<perimeter;
}