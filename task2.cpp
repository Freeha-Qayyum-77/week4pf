#include<iostream>
using namespace std;
void inchestoFeet(float a);

main()
{
float inch;
cout<<"Enter the measurement in inches: ";
cin>>inch;
inchestoFeet(inch);

}
void inchestoFeet(float a)
{
float b;
b=a/12;
cout<<"Equivalent in feet: "<<b;
}