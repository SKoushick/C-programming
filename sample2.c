#include <stdio.h>
#include <string.h>
int string(char a[],char k){
    int i=0;
    int d=0;
    printf("\n%s\n%c\n",a,k);
    while(1)
    {
        if (a[i]=='\0')
        {
            break;
        }
        if(k==a[i])
        {
            d++;
        }
        i++;
    }
    return d;
/*    while(1)
    {
        if(k==a[i])
        {
            d++;
        }
    }
    return k;
//return strlen(a);*/
}

int main(){
char b[255];
char c;
printf("enter the word");
scanf("%s",b);

printf("the word you entered %s\n",b);
printf("enter:");
scanf(" %c",&c);

printf("the number of letters in the word you entered is %d\n number of elements you choose=%s",strlen(b),string(b,c));
}
