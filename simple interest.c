#include <stdio.h>

int main()
{
int amnt=600;
int interest=12;
int time=7;

int simple_interest=((amnt*interest*time)/1200);

printf("simple interest=%d\n",simple_interest);
int total=amnt+simple_interest;
printf("total amnt =%d",total);
}
