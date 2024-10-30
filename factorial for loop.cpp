#include<iostream>
using namespace std;
int main()
{
	int i,num;
	int f=1;
	cout<<"enter your number";
	cin>>num;
	for(i=1;i<=num;i++)
	f=f*i;
	cout<<"factorial ofa number is"<<f<<endl;
	return 0;
}