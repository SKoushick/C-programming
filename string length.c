#include <stdio.h>
#include <string.h>
int string(char a[]){
return strlen(a);
}

int main(){
char b[90000];

printf("enter the word");
scanf("%s",&b);

printf("the word you entered %s\n",b);

printf("the number of letters in the word you entered is %d",string(b));

}
