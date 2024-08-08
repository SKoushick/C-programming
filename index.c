#include <stdio.h>

int index(char c[],int d)
{
    char e;
    printf("enter the word you need to check the index:");
    scanf("%c",&e);
    for (int i=0;i<d;i++){
        if(c[i]==e){
            printf("the index of the word is %d",c[i]);
            return 0;
        }
    }
}


int main()
{
     int b;
    printf("enter the range:");
    scanf("%d",&b);
    char a[b];
    printf("enter the word:");
    scanf(" %s",a);
    printf("%s",index(a,b));

}
