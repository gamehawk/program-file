
/*Program to find the area of a polygon using overloaded functions
*/
#include <iostream>
#include <string>
using namespace std;
//retangle
double area(double w,double b)
{
	return 2*(w+b);
}
//circle
double area(double r)
{
	return 3.141592463*r*r;
}
//cylinder


int main()
{
	double r,w,h;
	
	cout<<"Enter radius:";
	cin>>r;
	cout<<"Enter width:";
	cin>>w;
	cout<<"Enter height:";
	cin>>h;
	cout<<"Area of rectangle:"<<area(w,h);
	cout<<"Area of circle:"<<area(r);
	
}