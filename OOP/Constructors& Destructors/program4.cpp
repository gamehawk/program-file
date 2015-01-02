
/*Program to demonstrate the role of a Destructor
*/
#include <iostream>
#include <string>
using namespace std;

class Foo
{
	string s;
	fstream f;
   public:
	Foo(string s)
	{
		s = new string(s);	//new used => delete must be used later
		f = new fstream(s.c_str());
	}	
	~Foo(string s)
	{
		delete s;
		f.close();
		delete f;
	}
}
	
	
int main()
{
  	Foo bar;
}
