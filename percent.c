#include<stdio.h>
int main()
{
    int fn,sn;
    float per;
    printf("Enter The value First Number\n");
    scanf("%d",&fn);
    printf("Enter The value Second Number\n");
    scanf("%d",&sn);
    per=(float)fn/sn*100;
    printf("The %d is %.2f percent  of %d\n",fn,per,sn);
    return 0;
     return 0;
}