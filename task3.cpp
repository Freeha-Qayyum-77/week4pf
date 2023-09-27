#include<iostream>
using namespace std;
void howManyStickers(int a);

main()
{
int side;
cout<<"Enter the side length of the Rubik's Cube: ";
cin>>side;
howManyStickers(side);
}

void howManyStickers(int a)
{
int stickers;
stickers=a*a*6;
cout<<"Number of stickers needed: "<<stickers;

}


