#include<stdio.h>
int rev(int n)
{
   int t=0;
   while (n!=0)
   {
     t = t*10 + n%10;
     n /= 10;
   }
   return t;
}

int main()
{
   int number, reverse;

   printf("Enter a positive interger: ");
   scanf("%d", &number);

   reverse = rev(number);

   printf("The reverse of %d is: %d", number, reverse);

   return 0;
}
