#include <iostream>
using namespace std;

class interest 
{
   float rate=2.5;
   int principle,year,si;
   public:
   interest()
   {
       cout<<"Enter the principle:";
       cin>>principle;
       cout<<"Enter the year:";
       cin>>year;
       cout<<"Enter the rate:"<<rate<<endl;
   }
   void display()
   {
       si=(principle*year*rate)/100;
       cout<<"simple interest:"<<si<<endl;
   }
};
int main()
{
    interest i;
    i.display();
    return 0;
}