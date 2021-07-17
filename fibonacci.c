#include<stdio.h>
int fib_recursive(int n)
{ if(n==1||n==2)
{return n-1;}

else {
    return fib_recursive(n-1)+fib_recursive(n-2);
    }
}
int main()
{ int n;
    printf("Enter number for fibonacci series do you want\n");
    scanf("%d",&n);
    for (int i= 0; i<n ; i++)
    {
        printf("the fibonacci series of %d is\n",n);
        printf("%d",fib_recursive(i));

    }
    

     return 0;
}