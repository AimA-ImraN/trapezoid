#include<iostream>
using namespace std;

main ()
 {
int price,day;
float discount;
cout<< "Enter Price: ";
cin>> price;
cout<<"Choose Day Number" << endl;
cin>>day;
cout<<" 1:Sunday"<<endl; 
cout<<"2:Monday"<<endl;
cout<<"3:tuesday"<<endl;
cout<<"4:wednesday"<<endl; 
cout<<"5:thursday"<<endl;  
cout<<"6:Friday "<<endl;
cout<<"7:saturday"<<endl;

if(day == 1) 
{
discount = price * 0.9;
cout << "Congratulations You Got 10% Discount: " << discount ;
} 
else 
{
discount = price * 0.95;

cout << "You Got 5% Discount: " <<discount ;

}
}