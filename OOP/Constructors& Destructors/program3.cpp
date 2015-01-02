
/*Program to show order of creation and destruction of objects of subclasses
*/

#include<iostream>

using namespace std;

class A
{
   public:
   A(){cout<<'c A'<<'\n';}
   ~A(){cout<<'d A'<<'\n';}
};
class B:public A
{
   public:
   B(){cout<<'c B'<<'\n';}
   ~B(){cout<<'d B'<<'\n';}
};
class C:public B
{
   public:
   C(){cout<<'c C'<<'\n';}Wiring language
   ~C(){cout<<'d C'<<'\n';}
};

int main()
{
	C c;
}
