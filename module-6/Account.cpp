#include <iostream>
using namespace std;
char a[20],b[20],d[20];
int c,e,choice,f,ch,ch1,g,rate;
float si;
class account
{
    public:
       account()
       {
           cout<<"enter the first name :";
           cin>>a;
           cout<<"enter the second name :";
           cin>>b;
           cout<<"enter the age :";
           cin>>c;
           cout<<"enter the address :";
           cin>>d;
           cout<<"enter the amount in bank account :";
           cin>>e;
           cout<<"1 for saving account."<<endl;
           cout<<"2 for current account."<<endl;
           cout<<"enter a which type of account open in the bank.";
           cin>>ch;
           switch(ch)
           {
               case 1:
                  cout<<"saving account."<<endl;
                  cout<<"cheque book is not given in saving account."<<endl;
                  cout<<"simple interest rate = 2.5%"<<endl;
                  cout<<"1 withdraw amount."<<endl;
                  cout<<"2 check balance in account."<<endl;
                  cout<<"check balance in account."<<endl;
                  cout<<"enter the choice for withdrawal and check amount:";
                  cin>>choice;
                  switch(choice)
                  {
                      case 1:
                        cout<<"withdraw amount :";
                        cin>>f;
                        break;
                      case 2:
                        cout<<"check balance in account :"<<e-f;
                        break;
                       default:
                        cout<<"enter the valid choice.";
                        break;
                  }
                  g=30;
                  rate=2.5;
                  si=(e*g*rate)/100;
                  cout<<"simple interest :"<<si;
                  break;
                case 2:
                  cout<<"current account.";
                  cout<<"you can maintain minimum amount in account 10000 per day and balance fall down in account after 100000 some service charge is imposed"<<endl;
                  cout<<"cheque book is given in current account."<<endl;
                  cout<<"simple interest rate = 3.5%"<<endl;
                  cout<<"1 for 50 pages."<<endl;
                  cout<<"2 for 100 pages."<<endl;
                  cout<<"enter how many pages are required in cheque book :";
                  cin>>ch1;
                  switch(ch1)
                  {
                      case 1:
                        cout<<"your 50 pages cheque book request is accepted."<<endl;
                        break;
                      case 2:
                         cout<<"your 100 pages cheque book request is accepted"<<endl;
                        break;
                      default:
                         cout<<"enter the valid choice."<<endl;
                         break;
                  }
                  cout<<"1 withdraw amount."<<endl;
                  cout<<"2 check balance in account."<<endl;
                  cout<<"check balance in account."<<endl;
                  cout<<"enter the choice :";
                  cin>>choice;
                  switch(choice)
                  {
                      case 1:
                        cout<<"withdraw amount :";
                        cin>>f;
                        break;
                      case 2:
                        cout<<"check balance in account :"<<e-f;
                        if(e<100000)
                        {
                            cout<<"your balance is low maintain a balance otherwise some charge will be generated after 24 hours."<<endl;
                        }
                        else
                        {
                            cout<<"service charge :"<<endl;
                            cout<<"per day 500rs."<<endl;
                        }
                        break;
                      default:
                         cout<<"enter the valid choice.";
                         break;
                  }
                  g=30;
                  rate=3.5;
                  si=(e*g*rate)/100;
                  cout<<"simple interest :"<<si<<endl;
                  break;
                  
                default:
                   cout<<"invalid choice.";
                   break;
                   
           }
       }
};
int main()
{
    account a;
}

