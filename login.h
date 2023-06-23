#include <stdio.h>
#include <stdlib.h>

typedef struct user
{
    char name[10];
    char email[20];
    char password[30];
};

int login(void)
{
    int hver;

    printf("You are...\n1. Customer\n2. Admin\n\n");
    scanf("%d", &hver);

    if(hver == 1)
    {
        customerMenu();
    } else
    {
        menu();
    }

}
