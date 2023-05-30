#include<iostream>
using namespace std;
inline int larger(int x,int y, int z)
{
	if(x>y&&x>z)
	return (x);
	else if(y>z&&y>x)
	return(y);
	else
	return(z);
}
int main()
{
	int a,b,c;
	cout<<"enter three numbers:\n";
	cin>>a>>b>>c;
	cout<<larger(a,b,c)<<" is larger";
	return 0;
}
