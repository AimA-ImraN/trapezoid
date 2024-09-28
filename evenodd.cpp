#include<iostream>
using namespace std;
void odd(int num);
void even(int num);
main()
{
int num ;
cout<<"enter a number :";
cin>>num;

if (num%2==0)
 {
even(num);
 }
else
{
odd(num);
 }
}
void even(int num)
  {cout<<"Number"<< num <<"is even";}
void odd(int num)
  {cout<<"Number"<< num <<"id odd";}
