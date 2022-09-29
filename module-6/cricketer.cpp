#include <iostream>
using namespace std;
class cricketer
{
   public:
   int a,b;
   public:
   cricketer()
   {
      cout<<"M.S.DHONI"<<endl;
      a=50000;
      b=1000;
      cout<<"Total runs in all matches:"<<a<<endl;
      cout<<"Total wickets in all matches:"<<b<<endl;
   }
};
class run:public cricketer
{
     public:
     run()
     {
         cout<<"Average runs in all matches:"<<a/2<<endl;
         cout<<"Average Wickets in all matches:"<<b/2<<endl;
     }
};
int main() 
{
     run r;
}