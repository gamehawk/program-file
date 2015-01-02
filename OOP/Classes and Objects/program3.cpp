//a class that manages distances
class Distance
{
	float cm;
	public:
	void setInches(float f);
	void setFeet(float);
	void setMetres(float);
	float getMetres();
	float getFeet():
	float getInches();
};
	float getMetres()
	{return cm/100;}
	float getFeet()
	{return (cm/1200)*0.393701;}
	float getInches()
	{return getFeet()*12;}
	void setInches(float f)
	{cm = f/0.393701;}
	void setFeet(float)
	{cm = (f/0.393701)/12;}
	void setMetres(float)
	{cm  = f*100;}
	
int main()
{
	Distance t;
	float f;
	cout<<"Enter distance in  feet:";
	cin>>f;
	t.setFeet(f);
	cout<<"\Metres:"<<t.getMetres();
	cout<<"\Feet:"<<t.getFeet();
	cout<<"\Inches:"<<t.getInches();	
}
