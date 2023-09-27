#include<iostream>
using namespace std;
void calculatefuel(float a);

main()
{
float dis;
cout<<"Enter the distance: ";
cin>>dis;
calculatefuel(dis);

}

void calculatefuel(float a)
{
a=a*10;
cout<<"Fuel needed: "<<a;
}