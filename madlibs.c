#include <stdio.h>
#include<string.h>
int main()
{
    char adj1[50] = " ";
    char noun[50] = " ";
    char adj2[50] = " ";
    char verb[50] = " ";
    char adj3[50] = " ";

    printf("enter an adjective (description): ");
    fgets(adj1, sizeof(adj1), stdin);
    adj1[strlen(adj1) - 1] = '\0';

    printf("enter an noun (animal or person): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';

    printf("enter an adjective (description): ");
    fgets(adj2, sizeof(adj2), stdin);
    adj2[strlen(adj2) - 1] = '\0';

    printf("enter a verb (ending with -ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';

    printf("enter an adjective (description): ");
    fgets(adj3, sizeof(adj3), stdin);
    adj3[strlen(adj3) - 1] = '\0';

    printf("Today I went to a %s zoo\n", adj1);
    printf("In an exhibit, I saw a %s\n", noun);
    printf("%s was %s and %s!\n", noun, adj2, verb);
    printf("I was %s!", adj3);

    return 0;
}