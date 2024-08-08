#include <stdio.h>
int avg(){
int range;
printf("enter the value=");
scanf("%d",&range);
int arr[range];

for(int i=0;i<range;i++){

printf("enter the array elements=");
scanf("%d",&arr[i]);

}
int c=0;
for (int j=0;j<range;j++)
{
    c=arr[j]+c;

}
printf("%d",c/range);


}
int rev(){
int range;
printf("enter the value=");
scanf("%d",&range);
int arr[range];
for(int i=0;i<range;i++){

printf("enter the array elements=");
scanf("%d",&arr[i]);
int b[range];
for(int i=0;i<range;i++){

    b[i]=arr[sizeof(arr)/4-(i+1)];
}
for (int i = 0; i< range; i++){

 printf("%d,",b[i]);

}
}
}


int positive(){

int range;
printf("enter the value=");
scanf("%d",&range);
int arr[range];
for(int i=0;i<range;i++){

printf("enter the array elements=");
scanf("%d",&arr[i]);

}
int c=0;
for(int j=0;j<range;j++){
if (arr[j]>0){
        c=c+arr[j];
}

}
 printf("this is the sum of positive number=%d\n",c);




}




int count(){

int range;
printf("enter the value=");
scanf("%d",&range);
int arr[range];
for(int i=0;i<range;i++){

printf("enter the array elements=");
scanf("%d",&arr[i]);

}
int c=0;
for(int j=0;j<range;j++){
if (arr[j]%2==0){
        c++;
}

}
 printf("the count of even numbers are%d",c);

}
int main(){
    int f;
printf("the available codes are:\n");
printf("1.average value \n 2.reverse value of given array \n 3.sum of all positive numbers \n 4.even number\n");
printf("enter the process you need to execute:");
scanf("%d",&f);
switch(f){
case 1:
    avg();
    break;
case 2:
    rev();
    break;
case 3:
    positive();
    break;
case 4:
    count();
    break;
}
}
