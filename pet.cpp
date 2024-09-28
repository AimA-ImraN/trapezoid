#include <iostream>
using namespace std;
void pet(int holidays)
{
int totalDays = 365,workingDays,holiday, workDayPlay,normalPlaytime;
int totalPlaytime,playtime;
 workingDays = totalDays - holidays;
 holiday = 127;
 workDayPlay = 63; 
 normalPlaytime = 30000;
 totalPlaytime = (workingDays * workDayPlay) + (holidays * holiday);
 playtime= normalPlaytime - totalPlaytime;
 
  cout << "Holidays: " << holidays << endl;

    if (playtime>=0) 
      {
        cout << "Tom sleeps well ";
        int hours = playtime/60;
        int minutes =playtime%60;
        cout << hours << " hours and " << minutes << " minutes less for play" << endl;
       } 
   else 
      {
     cout << "Tom will run away ";
     int hours = playtime / 60;
     int minutes = playtime % 60;
     cout << hours << " hours and " << minutes << " minutes for play" << endl;
       }
}
main() 
   {
    int holidays;
    cout << "Enter number of holidays: ";
    cin >> holidays;
    pet(holidays);
}
