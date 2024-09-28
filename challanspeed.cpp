#include <iostream>
using namespace std;
void checkSpeed(int speed) 
{
 int speedLimit = 100; 
 if (speed > speedLimit) 
    {
     cout << "Halt… YOU WILL BE CHALLENGED!!!!" <<endl;
    } 
 else 
    {
     cout << "Perfect! You’re going good." <<endl;
     cout << "Your speed: " << speed << " km/h" <<endl;
     cout << "Speed Limit: " << speedLimit << " km/h" <<endl;
    }
}

int main() 
{
    int speed;
    {
     cout << "Enter vehicle speed in km/h: ";
     cin >> speed;
    cout <<endl;
checkSpeed(speed);
    }

    return 0;
}

