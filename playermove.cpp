 #include<iostream>
 #include<windows.h>
 using namespace std;
 void printmaze();
 void gotoxy(int x,int y);
 void playerMove(int x,int y);
 main()
{
    int x=4,y=4;
    system("cls");
    printmaze();
    while(true)
    {
     playerMove(x,y);
     x=x+1;
     if(x==41)
     {
      x=4;
     }
    }
}
             
   void playerMove(int x,int y)
   {
   gotoxy(x,y);
   cout<<"P";
   Sleep(200);
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

