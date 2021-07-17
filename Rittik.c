#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int a,b,c,d,e;
    float ava,per;
    printf("enter the marks of five subjects: \n",a,b,c,d,e);
    scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
    ava = (float)(a+b+c+d+e) / 5;
    printf(" the ava = %f \n",ava);
    per = ava ;
    if (per >= 80)
    {
        printf("grade is A \n");
    }
    else
    {
        if (per >=60)
        {
            printf("grade is B \n");
        }

    else

        if(per >=45)
        {
            printf("grade is C \n");
        }

    else
    {
        printf("the student is failed in exam");
    }
    }
    return 0;
}