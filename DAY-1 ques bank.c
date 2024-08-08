#include <stdio.h>
int G()
{
    int m;
    printf("Enter your mark :   ");
    scanf("%d",&m);
    if (m<=25)
    {
        printf("grade-e !");
    }
    else if (m>=25 & m<=40)
    {
        printf("grade-d !");
    }
    else if(m>=40 & m<=50)
    {
        printf("grade-c!");
    }
    else if (m>=50 & m<=60)
    {
        printf("grade-b!");
    }
    else if (m>=60 & m<=80)
    {
        printf("grade-a");
    }
    else
    {
        printf("garde-a+");
    }
}




int Y()
{
    int year;
    printf("Enter the year to check for leap year :   ");
    scanf("%d",&year);
    if (year%400==0)
    {
        printf("%d is a leap year !",year);
    }
    else if ((year%4==0)  &&  (year%100!=0))
    {
        printf("%d is a leap year !",year);
    }
    else
    {
        printf("%d is not a leap year !",year);
    }

}
int V()
{
    char c;
    printf("Enter the letter to check for vowel :   ");
    scanf("      %c",&c);
    char* b="aeiouAEIOU";
    if (c==b)
    {
        printf("this is a vowel");
    }
    else
    {
        printf("%c is not a vowel",c);
    }

}
int M()
{
    int min,h,m;
    printf("Enter minutes to convert :   ");
    scanf("%d",&min);
    h=min/60;
    m=min%60;
    if (min>1)
    {
        printf("%d minutes is ",min);
    }
    else
    {
        printf("%d minute is ",min);
    }
    if (h>0)
    {
        if (h>1)
        {
            printf("%d hours",h);
        }
        else
        {
            printf("%d hour",h);
        }
        if (m>0)
        {
            printf(" and ");
        }

    }
    if (m>0)
    {
        if (m>1)
        {
            printf("%d minutes",m);
        }
        else
        {
            printf("%d minute",m);
        }
    }

}
int main()
{   char Q;
    printf("enter the quesiton you need to see.....  !=");
    scanf("%d",&Q);
    switch (Q){
case 1:
    G();
    break;
case 2:
    N();
    break;
case 3:
    L();
    break;
case 4:
    Y();
    break;
case 5:
    V();
    break;
case 6:
    M();
    break;

    }

}
