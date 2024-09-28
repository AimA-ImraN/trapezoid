#include <iostream>
using namespace std;
void flowerShop(int redRose, int whiteRose, int tulip) 
{
    float redRosePrice = 2.5;  
    float whiteRosePrice = 3.0; 
    float tulipPrice = 1.5;
    float discountRate = 0.20;  
    float totalPrice = (redRose * redRosePrice) + (whiteRose * whiteRosePrice) + (tulip * tulipPrice);
    cout << "Original Price: $" << totalPrice << endl;
    if (totalPrice > 200) {
    float discountAmount = totalPrice * discountRate;
    float payableAmount = totalPrice - discountAmount;
    cout << "Price after Discount: $" << payableAmount << endl;
} 
    else 
    {
    cout << "No discount applied." << endl;
    cout << "Total Payable Amount: $" << totalPrice << endl;
     }
}

int main() 
{
  int redRose, whiteRose, tulip;
    cout << "Enter number of Red Roses: ";
    cin >> redRose;
    cout << "Enter number of White Roses: ";
    cin >> whiteRose;
    cout << "Enter number of Tulips: ";
    cin >> tulip;
    cout << "Enter number of Red Roses: ";
    cin >> redRose;
    cout << "Enter number of White Roses: ";
    cin >> whiteRose;
    cout << "Enter number of Tulips: ";
    cin >> tulip;
}
    cout << "Red Rose: " << redRose << endl;
    cout << "White Rose: " << whiteRose << endl;
    cout << "Tulips: " << tulip << endl;
    flowerShop(redRose, whiteRose, tulip);
    return 0;
}

