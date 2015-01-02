//a Program to demonstarate how functions work in inheritance
class A
{
	void speak()
	{
		coout<<"A";
	}
};	
class B:public A
{
	void speak()
	{
		coout<<"B";
	}
};	
int main()
{
	B b = B();
	B b2 = A();		//valid since A is a superclass of B
	A a = A();
	cout<<"\nb says:"<<b.speak();
	cout<<"\nb2 says:"<<b2.speak();
	cout<<"\na says:"<<a.speak();
}
