#include <stdio.h>


int add(){
int a,b;
printf("enter first value");
scanf("%d",&a);
printf("enter second value");
scanf("%d",&b);
int c=a+b;
printf("the addition of %d + %d is = %d\n",a,b,c);
}


int mul(){
int a,b;
printf("enter first value");
scanf("%d",&a);
printf("enter second value");
scanf("%d",&b);
int c=a*b;
printf("the addition of %d * %d is = %d\n",a,b,c);
}


int sub(){
int a,b;
printf("enter first value");
scanf("%d",&a);
printf("enter second value");
scanf("%d",&b);
int c=a-b;
printf("the addition of %d - %d is = %d\n",a,b,c);
}



int div(){
int a,b;
printf("enter first value");
scanf("%d",&a);
printf("enter second value");
scanf("%d",&b);
int c=a/b;
printf("the addition of %d / %d is = %d\n",a,b,c);
}


int main(){
int ch;
char yorn;

printf("the operations available here are:\n");
printf("1.addition\n2.multiplication\n3.subraction\n4.division\n");
printf("enter the math operation\n");
scanf("%d",&ch);
 switch (ch){
 case 1:
     add();
     break;
 case 2:
    mul();
    break;
 case 3:
    sub();
    break;
 case 4:
    div();
    break;


    }
    printf("\ndo you want to continue or not:\n");
scanf("%s",&yorn);
char yes='y';
char no='n';
while(1){
if(yorn==yes){

    printf("enter the math operation\n");
scanf("%d",&ch);
 switch (ch){
 case 1:
     add();
     break;
 case 2:
    mul();
    break;
 case 3:
    sub();
    break;
 case 4:
    div();
    break;
}

}
else if(yorn==no){
    printf("Thank you");
}
}

}
