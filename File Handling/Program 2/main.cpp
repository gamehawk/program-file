
/*Program to store and retrieve a class from a file.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class T
{
	int x;
	string z;
	public: T(int x, string z):x(x),z(z){}
};

int main ()
{
    string file;
    cout<<"Enter file name:\n";
    cin>>file;
    fstream f(file.c_str(),ios::in|ios::binary|ios::out);
    int p;
    string q;
    cout<<"Enter integer:\n";
    cin>>p;
    cout<<"Enter string:\n";
    cin>>q;
    T a(p,q);
    f.write((char*)(&a),sizeof(T));
    f.read((char*)(&a),sizeof(T));
    cout<<"p:"<<p<<"\nq:"<<q;
}

