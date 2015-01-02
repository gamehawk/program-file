
/*Program to create a data list for n people and search through them with various parameters
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Person
{
	public:
		Person(string name,int age,long SSID):name(name),age(age),SSID(SSID){}
		Person(){Person(" ",0,000000000);}
		void read()
		{
			cout<<"\nEnter name:"
			cin>>name;
			cout<<"\nEnter age:"
			cin>>age;
			cout<<"\nEnter SSID:"
			cin>>SSID;
		}
	private:
		string name;
		int age;
		long SSID;
};

int main ()
{
    string file;
    cout<<"Enter file name:\n";
    cin>>file;
    fstream f(file);
	vector<Person> a(30);
	for(vector<Person>::iterator i = a.begin();i<a.end();i++)
		a.at(i).read();
	
}
