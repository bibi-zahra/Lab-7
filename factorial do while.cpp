#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter your number";
	cin>>num;
	int f=1;
	int i=1;
	do
	{	f=f*i;
		i++;
	
	}
	while(i<=num);
		cout<<"factorial of a number is"<<f
		<<endl;
		return 0;
	}