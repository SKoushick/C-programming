int mul(){

int a,b;
printf("enter the table number=");
scanf("%d",&a);
printf("enter the range");
scanf("%d",&b);
for(int i=1;i<b;i++){
printf("%d*%d=%d\n",i,a,a*i);

}
}

int main(){

mul();
}
