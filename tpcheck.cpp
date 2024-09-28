#include <iostream>
using namespace std;
void tpChecker(int people, int tp)
{int sheetsday=57,sheetsroll=500;
 int totalsheets,days;
 totalsheets=tp*sheetsroll;
 days=totalsheets/(sheetsday*people);

    if(days<14)
     {
      cout<<"your TP will only last"<<days <<" days,BUY MORE!"<<endl;
      }
     else
     {
      cout << "Your TP will last " << days<< " days, no need to panic!" << endl;
      }
}
main()
{ 
 int people,tp;
 cout<<"Number of people in household:";
 cin>>people;
 cout<<"Number of rolls of Tissue paper:";
 cin>>tp;
 tpChecker(people, tp);
}
 