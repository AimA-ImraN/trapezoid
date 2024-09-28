#include<iostream>
using namespace std;
void pass(int marks);
void fail(int marks);
main()
{
int marks ;
cout<<"enter your marks :";
cin>>marks;

if (marks>50)
 {
pass(marks);
 }
else
{
fail(marks);
 }
}
void pass(int marks)
  {cout<<"PASS";}
void fail(int marks)
  {cout<<"FAIL";}
