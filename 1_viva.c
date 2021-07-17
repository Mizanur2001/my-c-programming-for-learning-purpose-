#include <stdio.h>
void grade(int marks , int a)
{
    if (marks <= 100)
    {
        if (marks < 40)
        {
            printf("fail\n");
        }
        else if (marks < 55)
        {
            printf("pass & third division \n");
        }
        else if (marks < 65)
        {
            printf("second division \n");
        }
        else if (marks < 80)
        {
            printf("first division\n");
        }
        else if (marks < 95)
        {
            printf("Distinction\n");
        }
        else
        {
            printf("extra ordinary\n");
        }
    }
    else
    {
        printf("Please Enter a valid Marks\n");
    }
}

int func(int a ,int b){
    int sum;
    sum =a+b;
    //return sum;
    return 0;
}

int main()
{   printf("the sum is=%d\n",func(2,3));
    int arr[5], sum = 0;
    float per;
    printf("Enter Marks of English ,Biology,Physics,Math & chemistry\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Grade for English is ");
    grade(arr[0],2);
    printf("Grade for Biology is ");

    char a[100]="This is a good array";
    
    printf("Grade for Physics is  " );
    grade(arr[2],2);
    printf("Grade for Math is ");
    grade(arr[3],2);
    printf("Grade for chemistry is ");
    grade(arr[4],2);

    for (int j = 0; j < 5; j++)
    {
        sum += arr[j];
    }
    per = (float)sum / 5;
    printf("Your total Marks is %d\n", sum);
    printf("You got %.2f %%\n", per);
    printf("your Overall grade is ");
    grade(sum / 5,2);

    return 0;
}
