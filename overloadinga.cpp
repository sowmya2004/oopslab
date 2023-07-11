#include<iostream>
using namespace std;
class loc
{
     int lonitude,latitude;
public :
      loc() {}
      loc(int 1g,int 1t)
      { 
      longitude =1g;
      latitude=1t;
      }
   void show()
   {
     cout<< longitude<<" ";
     cout<< latitude<<"\n";
   }
   loc operator +(loc op2);
   loc operator()(int i,int j):
   };
   // overload () for loc
   loc loc::operator()(int i,int j)
   {
        lonitude=i;
        latitude=j;
        return*this;
   }
   // overload+for loc
   loc loc::operator+(loc op2)
   {
        loc temp;
        temp.longitude=op2.lonitude+lonitude;
        temp.latitude=op2.latitude+latitude;
        return temp;
   }
   int main()
   {
         loc ob1910,20),ob2(1,1);
         ob1.show();
         ob1(7,8);
         ob1.show();
         ob1=ob2+ob1(10,10);
         ob1.show();
         return 0;
   }
  
