#include <iostream>
using namespace std;
void airline(string name,float x)
{if (name=="Pakistan")
  {
   cout<<"Ticket price is $"<<x-x*0.05;
  }
   else if (name=="Ireland")
  {
   cout<<"Ticket price is $"<<x-x*0.1;
  }
  else if (name=="India")
  {
  cout<<"Ticket price is $"<<x-x*0.2;
  }
   else if (name=="England")
  {
   cout<<"Ticket price is $"<<x-x*0.3;
  }
   else if (name=="Canada")
  {
   cout<<"Ticket price is $"<<x-x*0.45;
  }
   else
  {
   cout<<"Invalid input!";
  }
}
main()
{
int x;
string name;
while(true)
{cout<<"Enter the name of the country (start with the capital letter):";
cin>>name;
cout<<"Enter the price of ticket: $";
cin>>x;
airline(name ,x );}
}