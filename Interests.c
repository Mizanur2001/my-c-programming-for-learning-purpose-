#include <stdio.h>


int main()
{
    int p, m;
    float r, s;
    char f[20];
    char l[20];
    printf("Please Enter Your First Name\n");
    scanf("%s", &f);
    printf("Please Enter Your Last Name\n");
    scanf("%s", &l);
    printf("Hey ,%s please Enter your Amount\n", f);
    scanf("%d", &p);
    printf("Hey ,%s please Enter your Rate of interests\n", f);
    scanf("%f", &r);
    printf("Hey ,%s please Enter Duration\n", f);
    scanf("%d", &m);

    s=(p*(r/100))*m;
    printf("Hello %s %s your intesest upon %d Amount is %f \n ",f,l,p,s);

    return 0;
}