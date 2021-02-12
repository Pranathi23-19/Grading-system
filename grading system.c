#include<stdio.h>
#include<conio.h>
void main(){
      int marks;
      clrscr();
      
      printf("Enter your average marks");
      scanf(%d,&marks);
      
      if(marks>=80){
            printf("You got A grade");
            }
      else if(marks>=60){
            printf("You got B grade");
            }
      else if(marks>=40){
             printf("You got C grade");
             }
      elseif(marks<40){
             printf("You got failed);
             }
      getch();       
      }
