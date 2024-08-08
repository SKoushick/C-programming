int N()
{
    int n1,n2,n3;
    printf("Enter your first number :   ");
    scanf("%d",&n1);
    printf("Enter your second number :   ");
    scanf("%d",&n2);
    printf("Enter your third number :   ");
    scanf("%d",&n3);
    if (n1>=n2)
    {
        if (n1>=n3)
        {
            printf(" greatest number is %d",n1);
        }
        else
        {
            printf(" greatest number is %d",n3);
        }


    }
    else if (n2>=n3)
    {
        printf(" greatest number is %d",n2);
    }
    else
    {
        printf("greatest number is %d",n3);
    }

}


int L()
{
    int n1,n2,n3;
    printf("Enter your first number :   ");
    scanf("%d",&n1);
    printf("Enter your second number :   ");
    scanf("%d",&n2);
    printf("Enter your third number :   ");
    scanf("%d",&n3);
    if (n1<=n2)
    {
        if (n1<=n3)
        {
            printf(" lowset number is %d",n1);
        }
        else
        {
            printf(" lowset number is %d",n3);
        }


    }
    else if (n2<=n3)
    {
        printf(" lowset number is %d",n2);
    }
    else
    {
        printf(" lowset number is %d",n3);
    }

}



int main(){
int Q;
    printf("enter the quesiton you need to see.....  !=");
    scanf("%d",&Q);
 switch (Q){
 case 1:
 L();
 break;
 case 2:
 N();
 break;
 }



}
