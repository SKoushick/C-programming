#include <stdio.h>
#include <conio.h>
#include <string.h>


char Name[20],Fname[20],DOB[10],From[30],Qualification[50],Job_interested[50],College[100],Work[30],Skills[50],Achievements[50];
int age,no_of_languages_know,YOE,score=0,Arrear,YOPO;
double mobile;
int PD(){
clrscr();
printf("\033[0;35m");
printf("\t\t\tPERSONAL DETAILS");
printf("\n");
printf("Enter your name:");
scanf("%s",&Name);
printf("Enter your father name:");
scanf("%s",&Fname);
printf("Enter your date of birth:");
scanf("%s",&DOB);
printf("Enter where you are from:");
scanf("%s",&From);
printf("Enter your age:");
scanf("%d",&age);
printf("Enter you mobile number:");
scanf("%d",&mobile);
getch();
return 0;
}

int CD(){
printf("\033[0;33m");
printf("\t\t\tCOLLEGE DETAILS\n");
printf("Enter the college you studied:");
scanf("%s",&College);
printf("Enter your qualification:");
scanf("%s",&Qualification);
printf("Enter the no of arrears you keep in college:");
scanf("%d",&Arrear);
printf("Enter the year of passing out:");
scanf("%d",&YOPO);
return 0;
}


int Job_Details(){
char yes='y',smp;
printf("Enter the job you are interested:");
scanf("%s",&Job_interested);
printf("Work experience:");
scanf("%s",&Work);
printf("Your skills:");
scanf("%s",&Skills);
printf("is there any awards you have:");
scanf("%c",&smp);
if(smp==yes){
printf("Awards:");
scanf("%s",&Achievements);
}
return 0;
}

int Check_details(){
printf("\t\t\tCHECK YOUR DETAILS");
printf("\n");
printf("Your name:%s",Name);
printf("\t\t");
printf("Your father name is:%s",Fname);
printf("\n");
printf("Your date of birth:%s",DOB);
printf("\t\t");
printf("Your from:%s",From);
printf("\n");
printf("Your age:%d",age);
printf("\t\t");
printf("Your qualifiactions are:%s",Qualification);
printf("\n");
printf("Known languages:%d",no_of_languages_know);
printf("\t\t");
printf("Job you want:%s",Job_interested);
printf("\n");
printf("Your experience in other companies:%d",YOE);
printf("\n");
return 0;
}


int Results(){
int value,value1;
clrscr();
printf("\t\t\tCOMPANY'S RESULT\n");
if(no_of_languages_know>=4){
score=score+1;
}
else{
score-=1;
}
if(YOE>=2){
score=score+1;
}

else{
score-=1;
}
if(Arrear==0){
score=score+1;
}
else{
score=score-1;
}
printf("Score is:%d",score);
getch();
return 0;
}


int main(){
PD();
CD();
Job_Details();
return 0;
}