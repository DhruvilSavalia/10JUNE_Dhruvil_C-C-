 #include <iostream>
using namespace std;
int main() 
{
int a[3][3],b[3][3],c[3][3],i,j;
cout<<"Enter First Matrix Elements"<<endl;
for(i=0;i<3;i++)
 {
   for(j=0;j<3;j++)
    {
      cout<<"Enter First Matrix Element Number In Pocket["<<i<<"]["<<j<<"]";
      cin>>a[i][j];
    }
 }
 cout<<endl<<"Enter Second Matrix Elements"<<endl;
for(i=0;i<3;i++)
 {
   for(j=0;j<3;j++)
    {
      cout<<"Enter Second Matrix Element Number In Pocket["<<i<<"]["<<j<<"]";
      cin>>b[i][j];
    }
 }
 cout<<"First Matrix Is......"<<endl;
 for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
     {
       cout<<a[i][j]<<" ";
     }
     cout<<endl;
  }
  cout<<"Second Matrix Is......"<<endl;
  for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
      {
        cout<<b[i][j]<<" ";
      }
      cout<<endl;
   }
   for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
       {
         c[i][j]=a[i][j]+b[i][j];
       }
    }
    cout<<endl<<"Sum Of Two Matrix Is......."<<endl;
    for(i=0;i<3;i++)
     {
       for(j=0;j<3;j++)
        {
          cout<<c[i][j]<<" ";
        }
        cout<<endl;
     }
     return 0;
}