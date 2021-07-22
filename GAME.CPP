#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<iomanip.h>
void dragon();
void thanks();
int spec(int,int);
void main ()
{
 char pos;
 int x=0,y=0,c=-1,absc=40,ordi=12;
 gotoxy(40,12);
 cout<<"*"<<endl;
 while (pos!='\r')
 {
  gotoxy(1,1);
  cout<<"Your current position is ("<<x<<","<<y<<")"<<endl;
  cout<<"Enter your move (W-North,S-South,A-West,D-East)"<<endl;
  cout<<"Press Enter whenever to exit"<<endl;
  gotoxy(1,4);
  pos=getche();
  clrscr();
  magic:
  {
   c++;
   if (pos=='w'||pos=='W')
   {
    --y;
    gotoxy(absc,--ordi);
   }
    else if (pos=='s'||pos=='S')
    {
     ++y;
     gotoxy(absc,++ordi);
    }
     else if (pos=='a'||pos=='A')
     {
      --x;
      gotoxy(--absc,ordi);
     }
      else if (pos=='d'||pos=='D')
      {
       ++x;
       gotoxy(++absc,ordi);
      }
       else if (pos=='\r')
       break;
	else
	{
	 cout<<"Try Again"<<endl;
	 getch();
	 continue;
	}
  }
  if (c==2)
  goto magic;
  cout<<"*"<<endl;
  c=spec(x,y);
  gotoxy(5,0);
  if (c==1)
  {
   cout<<" * You Got a Mushroom"<<endl;
   cout<<"You get your move doubled for this chance"<<endl;
   gotoxy(40,5);
   cout<<"--------"<<endl;
   gotoxy(40,6);
   cout<<"-"<<setw(6)<<"-"<<endl;
   gotoxy(40,7);
   cout<<"--------"<<endl;
   gotoxy(42,8);
   cout<<"#"<<setw(2)<<"#"<<endl;
   gotoxy(42,9);
   cout<<"#"<<setw(2)<<"#"<<endl;
   gotoxy(42,10);
   cout<<"#"<<setw(2)<<"#"<<endl;
   gotoxy(42,11);
   cout<<"#"<<setw(2)<<"#"<<endl;
   getch();
   continue;
  }
   else if (c==2)
   {
    cout<<" * Dragons Lurk Here"<<endl;
    cout<<"BEWARE!"<<endl;
    dragon();
    continue;
   }
    else if (c==3)
    {
     cout<<"* You Got the TREASURE!"<<endl;
     cout<<"CONGRATS, you CRACKED the Game!"<<endl;
     gotoxy(40,5);
     cout<<"\xC9"<<"\xCD"<<"\xCD"<<"\xCB"<<"\xCD"<<"\xCD"<<"\xCD"<<"\xCD"<<"\xBB"<<endl;
     gotoxy(40,6);
     cout<<"\xCC"<<"\xCD"<<"\xCD"<<"\xCE"<<"\xCD"<<"\xCB"<<"\xCB"<<"\xCD"<<"\xB9"<<endl;
     gotoxy(40,7);
     cout<<"\xBA"<<setw(3)<<"\xBA"<<setw(2)<<"\xC8"<<"\xBC"<<setw(2)<<"\xBA"<<endl;
     gotoxy(40,8);
     cout<<"\xC8"<<"\xCD" <<"\xCD"<<"\xCA"<<"\xCD"<<"\xCD"<<"\xCD"<<"\xCD"<<"\xBC"<<endl;
     getch();
     clrscr();
     break;
    }
     else if(c==4)
     {
      cout<<"* You are caught by a DRAGON!"<<endl;
      cout<<"GAME OVER!"<<endl;
      dragon();
      break;
     }
      else
      continue;
 }
 thanks();
 clrscr();
}
int spec(int a,int b)
{
 if((a%8==0||a%10==0) && (b%6==0||b%16==0))
 return 1;
  else if ((a%5==0||a%9==0) && (b%7==0||b%4==0))
  return 2;
   else if((a%6==0||a%11==0) && (b%12==0||b%18==0))
   return 3;
    else if((a%7==0||a%8==0) && (b%8==0||b%9==0))
    return 4;
     else
     return 5;
}
void thanks()
{
 cout<<"Thanks for Playing"<<endl;
 gotoxy(40,5);
 cout<<"\x02"<<setw(8)<<"\x02"<<endl;
 gotoxy(44,6);
 cout<<"/"<<endl;
 gotoxy(39,7);
 cout<<"-"<<setw(10)<<"-"<<endl;
 gotoxy(40,8);
 cout<<"--------"<<endl;
 getch();
 exit(0);
}
void dragon()
{
 gotoxy(42,4);
 cout<<"^"<<endl;
 gotoxy(39,5);
 cout<<"######"<<endl;
 gotoxy(43,6);
 cout<<"%"<<setw(1)<<"#"<<endl;
 gotoxy(42,7);
 cout<<"%"<<setw(2)<<"#"<<endl;
 gotoxy(41,8);
 cout<<"%"<<setw(3)<<"#"<<endl;
 gotoxy(40,9);
 cout<<"%"<<setw(4)<<"#"<<endl;
 gotoxy(44,10);
 cout<<"######"<<endl;
 getch();
 clrscr();
}



