#include<iostream>
using namespace std;
int main()
{
	int a,b;
	for(a=1;a<=6;a++)
	{
		for(b=6;b>0;b--)
		{
			if(b<=a)
			cout<<b;
		}
		cout<<endl;
	}
	return 0;
}

