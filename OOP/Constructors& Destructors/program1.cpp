
/*Program to demonstrate the usage of a private/protected constructor
*/
#include <iostream>
#include <string>
using namespace std;
//a class that manages the simgle log file of a program
class LogFileManager
{
   private:
	fstream f;
	LogFileManager instance;
	LogFileManager(string name):f(name){}
   public:
	static LogFileManager getInstance(string name)
	{
		if(!instance)
	         	instance(name);
		return instance;
	}
}

int main()
{
	LogFileManager l1,l2;
	l1 = LogFileManager.getInstance("a.txt");
	l2 = LogFileManager.getInstance("b.txt"); //will give the same object as l1 ignoring the b.txt
}
