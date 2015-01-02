//a class that stores data of a student
class Student
{
	public:
	Student(string name,string rollno,int grade,char sec):name(name),rollno(rollno),grade(grade),sec(sec){}
	friend operator<<(ostream o,Student s);
	friend operator>>(istream i,Student &s);
	private:
	string name;
	string rollno;
	int grade;
	char sec;
};

friend operator<<(ostream o,Student s)
{
	o<<endl<<"Name:"<<name<<endl<<"Roll Number:"<<rollno<<endl<<"Grade:"<<grade<<endl<<"Section:"<<sec<<endl;
}
friend operator>>(istream i,Student &s)
{
	cout<<"Enter name:";
	i>>name;
	cout<<"Enter roll number:";
	i>>rollno;
	cout<<"Enter grade:";
	i>>grade;
	cout<<"Enter section:";
	i>>sec;
}	

int main()
{
	Student s1,s2,s3;
	cin>>s1>>s2>>s3;
	cout<<s1<<s2<<s3;
}
