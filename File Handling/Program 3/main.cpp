
/*Program to count number of words in a file
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main ()
{
    string file;
    cout<<"Enter file name:\n";
    cin>>file;
    fstream f(file.c_str());
    while(f.get()==' ');
	int n = 0;
	char x;
	while(!(f.eof()))
	{
		x = f.get();
		if(!((x>='a'&&x<='z') &&(x>='A'&&x<='Z')))
			n++;
	}
	cout<<"\n"<<n+1<<"words.";

}