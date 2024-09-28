#include<iostream>
using namespace std;
void eligible(int age);
void ineligible(int age);
main()
{
int age;
char op;
cout<<"enter your age :";
cin>>age;

if (age>=18)
 {
eligible(age);
 }
else
{
ineligible(age);
 }
}
void eligible(int age)
  {cout<<"you are eligible to vote";}
void ineligible(int age)
  {cout<<"you are ineligible to vote";}
