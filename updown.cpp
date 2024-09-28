 #include<iostream>
 #include<windows.h>
 using namespace std;
 void printmaze();
 void gotoxy(int x,int y);
 void playerMove(int x,int y);
 main()
{
    int x=1,y=2;
    system("cls");
    printmaze();
    while(true)
    {
     playerMove(x,y);
     y=y+1;
     if(y==9)
     {
      y=2;
     }
    }
}
             
   void playerMove(int x,int y)
   {
   gotoxy(x,y);
   cout<<"Patrol";
   Sleep(200);
   gotoxy(x,y);
   cout<<"      ";
}
   void printmaze()
{
  cout<<"#####################################"<<endl;
  cout<<"#                                   #"<<endl;
  cout<<"#                                   #"<<endl;
  cout<<"#                                   #"<<endl;
  cout<<"#                                   #"<<endl;
  cout<<"#                                   #"<<endl;
  cout<<"#                                   #"<<endl;
  cout<<"#                                   #"<<endl;
  cout<<"#                                   #"<<endl;
  cout<<"#####################################"<<endl;
}
 void gotoxy(int x, int y)
 { 
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
 } 