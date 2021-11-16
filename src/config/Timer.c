#include <stdio.h>
#include <windows.h>

int main(){

int hour,minutes,seconds;
 int d=1000;

    printf("Set Time : \n");
    scanf("%d%d%d" , &hour,&minutes,&seconds);

       if(hour>12 || minutes>60 || seconds>60){
           printf("Error[Invalid Value]");
           exit(0);
       }
       while(1){
           {
               seconds++;
               if(seconds>59){
                   minutes++;
                   seconds=0;
               }
               if(minutes>59){
                   hour++;
                   minutes=0;
               }
               if(hour>12){
                   hour=1;
               }
               printf("\n Timer : ");
               printf("\n %02d:%02d:%02d",hour,minutes,seconds);
               Sleep(d);

               system("cls");
           }
       }

}