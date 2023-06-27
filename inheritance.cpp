#include<iostream>
using namespace std;
struct date
{
    int d;
    int m;
    int y;
};
class hospital
{
    char name[100];
    struct date d_adm;
    struct date d_dis;
protected:int age;
public:
      void getdata()
      {
         cout<<"enter name of the patient:";
         cin>> name;
         cout<<"enter age:";
         cin>>age;
         cout<<"enter date of admission:";
         cin>>d_adm.d>>d_adm.m>>d_adm.y;
         cout<<"enter date of discharge:";
         cin>>d_dis.d>>d_dis.m>>d_dis.y;
      }
      void display()
      {
         cout<<name<<"\t";
         cout<<age<<"\t";
         cout<<d_adm.d<<'_'<<d_adm.m<<'_'<<d_adm.y<<"\t\t";
         cout<<d_dis.d<<'_'<<d_dis.m<<'_'<<d_dis.y;
      }
};
class pediatric_patient:public hospital
{
      char vaccine[20];
public:
      void get()
      {
           getdata();
           cout<<"enter the name of vaccine to be given\n";
           cin>>vaccine;
      }
      void put()
      {
           if(age<12)
           {
               display();
               cout<<"\t"<<"\t";
               cout<<vaccine;
               cout<<"\n";
           }
           else
               cout<<"age greater than 12 not a pediatric patient";
       }
};
int main()
{
   hospital h[5];
   int n;
   cout<<"enter the number of pediatric patient\n";
   cin>>n;
   for(int i=0;i<n;i++)
   {
       h[i].getdata();
   }
   cout<<"pediatric patient database \n";
     cout<<"name"<<"\t"<<"age"<<"\t"<<"date_of admission"<<"\t"<<"date_of_discharge"<<"\t"<<"vaccine\n";
     for(int i=0;i<n;i++)
     {
        h[i].display();
        cout<<"\n";
     }
     pediatric_patient a1[5];
     cout<<"enter the number of pediatric patient\n";
     cin>>n;
     for(int i=0;i<n;i++)
     {
       a1[i].get();
   }
   cout<<"pediatric patient database \n";
     cout<<"name"<<"\t"<<"age"<<"\t"<<"date_of admission"<<"\t"<<"date_of_discharge"<<"\t"<<"vaccine\n";
     for(int i=0;i<n;i++)
     {
     a1[i].put();
     }
   return 0;
}
         
