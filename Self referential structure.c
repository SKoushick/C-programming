#include <stdio.h>
#include <string.h>

struct a{
    int b;
    char c;
    struct a *ptr2;
};

int main(){
    struct a var1;
    struct a var2;

    var1.b=45;
    var1.c='E';
    var1.ptr2=NULL;

    var2.b=35;
    var2.c='N';
    var2.ptr2=NULL;

    var1.ptr2=&var2;


    printf("The values inside the structure:B:%d,C:%c",var1.ptr2->b,var1.ptr2->c);
}
