
/*Basic diff algorithm- compares 2 files and prints out the differences
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main ()
{
    char a[50],b[50];
    bool c[50];//false -> matching text
    string file1,file2;
    cout<<"Enter first file name:\n";
    cin>>file1;
    cout<<"Enter second file name:\n";
    cin>>file2;
    int diff;
    fstream f1(file1.c_str(),ios::in),f2(file2.c_str(),ios::in);
    while(f1.get()==' ');
    while(f2.get()==' ');
    while(!(f1.eof()||f2.eof()))
    {
		f1>>a;
		f2>>b;
		for(int i = 0;i<50;i++)
		    if(a[i]==b[i])
		    	c[i] = false;
		    else
		    	c[i] = true;
		for(int  i = 0;i<50;i++)
		{
			if(c[i])
			cout<<' ';
			else
			cout<<a[i];
		}
		cout<<'\n';
		for(int  i = 0;i<50;i++)
		{
			if(c[i])
			cout<<' ';
			else
			cout<<b[i];
		}
		cout<<'\n';
    }

}
