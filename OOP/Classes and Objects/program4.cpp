//Program to show order of creation in inherited classes
#include<iostream>
class A
{
	A(){cout<<"\n A()";}
	~A(){cout<<"\n ~A()";}
}
class B:A
{
	B(){cout<<"\n B()";}
	~B(){cout<<"\n ~B()";}
}
class C:B
{
	C(){cout<<"\n C()";}
	~C(){cout<<"\n ~C()";}
}
class D:C
{
	D(){cout<<"\n D()";}
	~D(){cout<<"\n ~D()";}
}
int main()
{
	D d;
}
