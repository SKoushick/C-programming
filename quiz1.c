#include <stdio.h>

int ques()
{
    char q[5]={'a','b','c','d','e'};
    char ans;
    int count=0;
    char q1='w',q2='e',q3='h',q4='r',q5='k';
    printf("this is your question section so you can write only one option given in the question");

    for (int i;i<5;i++)
    {
        if (q[i]=='a')
        {
            printf("What should come next in the following letter sequence?\nA A B A B C A B C D A B C D E A B C D\n1.x\n2.w\n3.i\n4.j\n");
            printf("enter your ans:");
            scanf(" %c",&ans);
            if(ans==q1){
                count++;
                printf("you have scored a mark\n");
            }
            else{
                count--;
                printf("you have scored minus mark\n");

            }

        }
        else if (q[i]=='b')
        {
            printf("Which letter in this alphabet is the eighth letter to the right of the letter and  which is tenth letter to the left of the last but one letter of the alphabet?\n1.l\n2.b\n3.q\n4.e\n");
            printf("enter your ans:");

            scanf(" %c",&ans);
             if(ans==q2){
                count++;
                                printf("you have scored a mark\n");

            }
            else{
                count--;
                                printf("you have scored minus mark\n");

            }

        }
        else if (q[i]=='c')
        {
            printf("If the first half of English alphabet is reversed and the second half of the English alphabet is left undisturbed then which letter will be 10th to the left of 16th letter from the left?\n1.h\n2.o\n3.i\n4.g\n");

            printf("enter your ans:");

            scanf(" %c",&ans);
             if(ans==q3){
                count++;
                                printf("you have scored a mark\n");

            }
            else{
                count--;
                                printf("you have scored minus mark\n");

            }

        }
        else if (q[i]=='d')
        {
            printf("Which letter is in the middle of 13th letter from the left and 4th letter from the right?\n1.n\n2.m\n3.r\n4.t\n");
            printf("enter your ans:");

            scanf(" %c",&ans);
             if(ans==q4){
                count++;
                                printf("you have scored a mark\n");

            }
            else{
                count--;
                                printf("you have scored minus mark\n");

            }

        }
        else if (q[i]=='e')
        {
            printf("If the second half of the English alphabet is reversed then which letter will be 4th to the right of 20th letter from the right?\n1.k\n2.w\n3.i\n4.j\n");
            printf("enter your ans:");

            scanf(" %c",&ans);
             if(ans==q5){
                count++;
                                printf("you have scored a mark\n");

            }
            else{
                count--;
                                printf("you have scored minus mark\n");

            }

        }
    }
    printf("youre score is %d",count);
}

int main(){

ques();

}
