#include<iostream>
using namespace std;
class area
{
	public:
	int l,w,a;
	area(int lenght,int width)
	{
		l=lenght;
		w=width;
	}
	void recarea()
	{
		a=l*w;
	}
	void display()
	{
		cout<<"area of wall is: \n"<<a;
	}
};
int main()
{
	int length,width;
	cout<<"enter the length of the rectanle\n";
	cin>>length;
	cout<<"enter the width of the rectangle\n";
	cin>>width;
	area obj(length,width);
	obj.recarea();
	obj.display();
	return 0;
}
