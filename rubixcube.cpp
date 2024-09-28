#include<iostream>
using namespace std;
void stickers(int x);
main()
{
int x;
cout<<"Enter the side length of cube :";
cin>>x;
stickers(x);
}
void stickers(int x)
{
int stickers;
stickers=6*x*x;
cout<<"the no. of stickers needed:"<<stickers;
}