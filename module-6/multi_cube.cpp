#include <iostream>
using namespace std;
   class line
   {
      public:
      inline float mul(float x ,float y)
      {
        return (x*y);
      }
      inline float cube(float x)
      {
        return(x*x*x);
      }
   }; 

  int main()
  {
    line obj;
    float val1,val2;
    cout<<"Enter Two Values:";
    cin>>val1>>val2;
    cout<<"Multiplication Value Is:"<<obj.mul(val1,val2)<<endl;
    cout<<"Cube Value Is:"<<obj.cube(val1)<<"\t"<<obj.cube(val2);
  }