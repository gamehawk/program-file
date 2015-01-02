//a class that manages time
class Time()
{
	float h,m,s;
	public:
	Time(float,float,float);
	float getTimeInMinutes();
	float getTimeInSeconds():
	float getTimeInHours();
}
	Time::Time(float h,float m,float s):h(h),m(m),s(s)
	{}
	float Time::getTimeInMinutes()
	{return m+h*60=s/60;}
	float Time::getTimeInSeconds()
	{return h*3600+m*60+s;}
	float Time::getTimeInHours()
	{return h+m/60+s/3600;}

int main()
{
	float h,m,s;
	cout<<"h:";cin>>h;
	cout<<"m:";cin>>m;
	cout<<"s:";cin>>s;
	Time t(h,m,s);
	cout<<"\Hours:"<<t.getTimeInHours();
	cout<<"\Minutes:"<<t.getTimeInMinutes();
	cout<<"\Seconds:"<<t.getTimeInSeconds();	
}
