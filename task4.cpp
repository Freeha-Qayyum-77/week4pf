#include<iostream>
using namespace std;
void addition(int a,int b);
void subtraction(int a,int b);
void multiplication(int a,int b);
void division(int a,int b);

main()
	{
	int n1,n2;
	char op;
	cout<<"Enter 1st number: ";
	cin>>n1;
	cout<<"Enter 2nd number: ";
	cin>>n2;
	cout<<"Enter an operator (+, -, *, /): ";
	cin>>op;
if(op=='+')
	addition(n1,n2);
if(op=='-')
	subtraction(n1,n2);
if(op=='*')
	multiplication(n1,n2);
if(op=='/')
	division(n1,n2);
}

void addition(int a,int b)
	{
	int sum=a+b;
	cout<<"Addition: "<<sum;
	}
void subtraction(int a,int b)
	{
	int minus=a-b;
	cout<<"Subtraction: "<<minus;
	}
void multiplication(int a,int b)
	{
	int multiply=a*b;
	cout<<"Multiplication: "<<multiply;
	}
void division(int a,int b)
	{
	int divide=a/b;
	cout<<"Division: "<<divide;
	}