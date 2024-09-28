#include <iostream>
using namespace std;
void opposite(string input){
    if(input=="false")
    {
        cout<<"True"<<endl;
    }
    else if (input=="true")
    {
        cout<<"False"<<endl;
    }
    else 
    {
     cout<<"invalid output";
     }
    
}
main() 
{
string input;
cout<<"Enter true or false :";
cin>>input;
opposite(input);
}