int main()
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
