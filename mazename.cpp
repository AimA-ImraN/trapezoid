 #include<iostream>
 #include<windows.h>
 using namespace std;
 void printmaze();
 void gotoxy(int x,int y);
 void playerMove(int x,int y);
 main()
{
    int x=16,y=5;
    system("cls");
    printmaze();
    while(true)
    {
     playerMove(x,y);
     x=x+1;
     if(x==16)
     {
      x=12;
     }
    }
}
             
   void playerMove(int x,int y)
   {
   gotoxy(x,y);
   cout<<"AIMA";
   Sleep(100);
   gotoxy(x,y);
   cout<<"";
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

