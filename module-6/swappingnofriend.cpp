#include <iostream>
using namespace std;
class number
{
    int a,b,c;
    public:
    void input()
    {
        cout<<"Enter two numbers:";
        cin>>a>>b;
    }
    friend void swap(number &t);
    void display()
    {
        cout<<"After Swapping a is:" << a<<endl;
        cout<<"After Swapping b is:" << b<<endl;
    }
};
void swap(number &n)
{
    n.c = n.a;
    n.a = n.b;
    n.b = n.c;
}
int main()
{
    number n1;
    n1.input();
    swap(n1);
    n1.display();
    return 0;
}
