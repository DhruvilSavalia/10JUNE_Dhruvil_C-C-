#include <iostream>
using namespace std;

char x[20],z[20];
int y,f;
float d;
 class person
 {
    public:
    person()
    {
      cout<<"Enter the name:";
      cin>>x;
      cout<<"Enter the age:";
      cin>>y;
   }
};
class student
{
   public:
   student()
   {
     cout<<"Enter percentage:";
     cin>>d;
   }
};
class teacher:public person,public student
{
   public:
   teacher()
   {
      cout<<"teacher name:";
      cin>>z;
      cout<<"teacher salary:";
      cin>>f;
   }
};
int main()
{
    teacher t;
}