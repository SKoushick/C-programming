#include <stdio.h>

int main(){

int a,b,c=0;

printf("enter the value");
scanf("%d",&a);
b=a;
while(a>0){
c=c+((a%10)*(a%10)*(a%10));
a=a-(a%10);
a=a/10;
}
if (b==c){
printf("%d this is a armstrong number",b);
}
else{
printf("%d this is not a armstrong number",b);
}
}
