#include<iostream>
using namespace std;
void fuel(int);
main()
{
int dis;
cout<<"Enter distance :";
cin>>dis;
fuel(dis);
}
void fuel(int dis)
 {
 int amount=dis*10;
 cout<<"The amount is"<<amount;
 if(amount<100)
  {
 cout<<"fuel needed is 100";
  }
  }

