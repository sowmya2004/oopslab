#include<iostream>
#include<cstdio>
using namespace std;
class dates
{
   int dd,mm,yy;
   public:
   dates()
   {
   cout<<"default date:1/12/2012\n";
   }
   dates(char *d)
      {
      scanf("%d%d%d",&mm,&dd,&yy);
      }
     dates(int m,int d,int y)
      {
       dd=d;
       mm=m;
       yy=y;
      }
      void sd()
      {
        cout<<"data is:\n";
        cout<<mm<<"/"<<dd<<"/"<<yy
        <<"/n";
      }
};
int main()
{
    int m,d,y;
    cout<<"enter month,data and year\n";
    cin>>m>>d>>y;
    cout<<"enter month,date&year in a single\n";
    dates b("m,d,y"),c(m,d,y),e;
    b.sd();
    c.sd();
    return 0;
}
