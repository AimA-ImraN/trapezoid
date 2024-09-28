#include<iostream>
using namespace std;
void feet(int inches);
main()
{
int inches;
cout<<"Enter the value in inches:";
cin>>inches;
feet(inches);
}

void feet(int inches)
{
int feet;
feet=inches/12;
cout<<"inches to feet:"<<feet;
}