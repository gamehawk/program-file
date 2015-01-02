
/*Program to create a (fake) NOC list of agents with their real and agent names, and search through them
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class List
{
	public:
		List(string file):file(file){}
		void inputList(int n)
		{
			string a,b;
			for(int i = 0.i<n;i++)
			{
				cout<<"Enter fake name:";
				cin>>a;
				cout<<"Enter real name:";
				cin>>b;
				f.put(a.c_str());
				f.put(':');
				f.put(b.c_str());
				f.put('\n');
			}
		}
		void getRealName(string fakeName)
		{
			string temp;
			char a[50];
			while(!stream.eof())
			{
				stream.getline(&a,50,':');
				temp = a;
				temp = temp.erase(temp.back());
				if(a == fakeName)
				{
					stream.getline(&a,50,'\n');
					cout<<a<<'\n';
				}
			}
		}
		void getFakeName(string realName)
		{	
			string a,b;
			char c[50];
			while(!stream.eof())
			{
				stream.getline(&c,50,':');
				a = c;
				a = a.erase(a.back());
				stream.getline(&c,50,'\n');
				b = c;
				b = b.erase(b.back());
				if(b == realName)
				{
					cout<<a<<'\n';
				}
			}
		}
    private:
		fstream f;
		string file;
};

int main ()
{
	string s;
	cout<<"Enter file:";
	cin>>s;
	List list(s);
	list.inputList(10);
	cout<<"Enter fake name:"
	cin>>s;
	cout<<"\nReal name:"<<list.getRealName(s);
	cout<<"Enter real name:"
	cin>>s;
	cout<<"\nfake name:"<<list.getFakeName(s);
}
