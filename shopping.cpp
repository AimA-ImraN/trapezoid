#include <iostream>
using namespace std;
void PurchaseAmount(string day, int purchaseAmount);
int main() 
{  string day;
   int purchaseAmount;
   int payableAmount;
   cout << "Enter the day of purchase: ";
   cin >> day;
   cout << "Enter the total purchase amount: $";
   cin >> purchaseAmount;
   PurchaseAmount( day, purchaseAmount);
}
void PurchaseAmount(string day, int purchaseAmount)
{
    int payableAmount;
    if (day == "sunday") 
    {
    	 payableAmount = purchaseAmount - (purchaseAmount * 0.10);
    }  
    else 
    {
   	payableAmount = purchaseAmount;
    }
    cout << "Total payable amount: $" << payableAmount <<endl;
}
