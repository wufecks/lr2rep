#include <stdio.h>

int main(int argc, char **argv)
{
       char first[255], last[255];
//впаывпыв
//mastr
//123
    printf("Enter your first name: ");
    fgets(first, 255, stdin);
    first[strlen(first)-1] = '\0'; /* remove the newline at the end */

    printf("Now enter your last name: ");
    gets(last); /* buffer overflow? what's that? */

    printf("Salut to %s %s!\n", first, last);
    return 0;

}