/*
		    Author-Jetshree Sharma
		    Doc-
		    Objective-To create a Candy Game
*/
#include<stdio.h>
#include<conio.h>
void main(){
int candyX=40,candyY=2,boxX=40,boxY=22,score=0,lifeline=3,d=0;
char ch;
textbackground(BLUE);
start:
clrscr();
gotoxy(60,5);
cprintf("score=%d",score);
gotoxy(60,6);
cprintf("lifeline=%d",lifeline);
gotoxy(candyX,candyY); 
textcolor(YELLOW);
cprintf("0");
gotoxy(boxX,boxY);
cprintf("#");
gotoxy(boxX+7,boxY);
cprintf("#");
gotoxy(boxX,boxY+1);
cprintf("########");

if(kbhit()){
ch=getch();
switch(ch){
case 'a':if(boxX>1){
	 boxX--;
	 }
	 break;
case'A':if(boxX>1){
	boxX--;
	}
	break;
case'd':if(boxX<73){
	boxX++;
	}
	break;
case'D':boxX++;
	break;

case'x':exit(0);
case'X':exit(0);
      }//end of switch
}//end of if
candyY++;
if(candyY==22){
d=candyX-boxX;
if(d>=1  &&   d<=6){
    score++;
    sound(600);
    delay(600);
    nosound();
    }else{
    lifeline--;
    sound(200);
    delay(500);
    nosound();
    if(lifeline==0){
    clrscr();
    gotoxy(40,13);
    textcolor(RED);
    cprintf("GAME IS OVER");
    sound(100);//hertz
    delay(1000);
    nosound();
    getch();
    exit(0);
    }
}

    candyY=2;
    candyX=rand()%80+1;
}
delay(200);
goto start;



}//end of main