#include<iostream>
using namespace std;
void passOrFail(int a);

main()
{
	int num;
	cout<<"Enter your score: ";
	cin>>num;
	passOrFail(num);
}
void passOrFail(int a)
{
if(a>50)
	cout<<"Pass";
else
	cout<<"Fail";
}
