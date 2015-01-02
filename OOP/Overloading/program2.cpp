
/*Function to print anything
*/
#include <iostream>
#include <string>
using namespace std;

void display(char* a)
{
	cout<<a;
}
void display(string a)
{
	cout<<a.c_str();
}
void display(double a)
{
	cout<<a;
}

int main()
{
  display("Hi");
  string s("Hello");
  display(s);
  display(2);
  return 0;
}
