#include <stdio.h>
#include <stdlib.h>
int main()
{
    // You have to fill in values to a template letter.txt
    // Letter.txt looks something like this:
    // Thanks {{name}} for purchasing {{item}} from our outlet {{outlet}}.
    // Please visit our outlet {{outlet}} for any kind of problems. We plan to server you again soon.
    // You have to read this file and replace these values:
    // {{name}}   - Harry 
    // {{item}}   - Table Fan 
    // {{outlet}} - Ram Laxmi fan outlet

    // Use file functions in c to accomplish the same


    FILE *a =NULL;
    a=fopen("letter.txt","r+");
    char b[300];
    fgets(b,200,a);
    printf("%s\n",b);
    fclose(a);



    return 0;
}
