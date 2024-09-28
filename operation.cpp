#include<iostream>
using namespace std;
void add(int num1,int num2);
void subtract(int num1,int num2);
void multiply(int num1,intnum2);
void divide(int num1,int num2);
main()
{
int num1,num2;
char op;
cout<<"first number :";
cin>>num1;
cout<<"second number:";
cin>>num2;
cout<<"Enter Operator(+,-,*,/):";
cin>>op;
if (op=='+')
 {
add(num1,num2);
 }
if(op=='-')
 {
subtract(num1,num2);
 }
if(op=='*')
 {
multiply(num1,num2);
 } 
if(op=='/')
 {
divide(num1,num2);
 }
}
void add(int num1,int num2)
  {cout<<"sum:"<< num1+num2;}
void subtract(int num1,int num2)
  {cout<<"subtract:"<< num1-num2;}
void multiply(int num1,int num2)
  {cout<<"multiply:"<<num1*num2;}
void divide(int num1, intnum2)
  {cout<<"divide:"<<num1/num2;}
