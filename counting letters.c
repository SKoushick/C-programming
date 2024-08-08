#include <stdio.h>
#include <string.h>
int string(char a[]){
    int i=0;
    while(1)
    {
        if (a[i]=='\0')
        {
            break;
        }

        i++;
    }
    return i;

}

int count(char b[])
{
int c=0,i=0;
char d;
printf("enter:");
scanf(" %c",&d);
 while(b[i]!='\0')
    {
        if (b[i]==d)
        {
            c++;
        }
        i++;
    }
    return c;
}

int main(){
char b[255];
printf("enter the word");
scanf("%s",b);

printf("the word you entered %s\n",b);

printf("the number of letters in the word you entered is %d\n",strlen(b));

printf("the letter you choose =%d",count(b));
}
