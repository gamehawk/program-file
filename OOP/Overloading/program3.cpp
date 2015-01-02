
/*Program to illustrate constructor overloading
*/

#include<iostream>

using namespace std;

class Example
{
    int a,b;
    public:
	Example()
	{
		a=50;
		b=100;
    }

    Example(int x,int y)
	{
		a=x;
		b=y;
    }
	
    void Display()    {
    cout<<"\nValues :"<<a<<"\t"<<b;
    }
};

int main()
{
        Example a1(10,20);
        Example a2;
        a1.Display();
        a2.Display();
        return 0;
}