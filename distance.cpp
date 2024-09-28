#include<iostream>
using namespace std;
void fuel(int distance);
main()
{
int distance;
cout<<"Enter the distance:";
cin>>distance;
fuel(distance);
}

void fuel(int distance)
{
int fuel;
fuel=distance*10;
cout<<"the amount of fuel needed is:"<<fuel;
}