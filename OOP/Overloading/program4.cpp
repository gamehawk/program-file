
/*Program to illustrate operator overloading
*/
#include <iostream>
#include <string>
using namespace std;

class Complex
{
	public:
		Complex(int r=0,int i=0):r(r),i(i){}
		Complex operator+(Complex a)
		{	
			return Complex(a.r+r,a.i+i);
		}
		Complex operator-(Complex a)
		{	
			return Complex(r-a.r,i-a.i);
		}
		friend void operator<<(ostream o,Complex a);
	private:
		double r;
		double i;
}
	void operator<<(ostream o,Complex a){cout<<"\nReal:"<<a.r<<"Imaginary:"<<a.i;}
	
int main()
{
  Complex a(1,2),b(5,6);
  cout<<a<<b<<a+b<<a-b;
}
