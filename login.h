#include <stdio.h>
#include <stdlib.h>
#include <dos.h>

struct user
{
    char userName[10];
    char email[20];
    char password[30];
};

int login(void)
{
    int hver;

    printf("You are...[1-2]\n\n1. Customer\n2. Admin\n\n>");
    scanf("%d", &hver);
    system("cls");

    if(hver == 1)
    {
        int log_sign;
        printf("Press 1 to Sign up and order coffee!\n\n");
        printf("Already have an account? Press 2 to log in and continue to your order!\n\n>");
        scanf("%d", &log_sign);
        system("cls");

        if(log_sign == 1)
        {
            sign();
        } else
        {
            //log();
        }

        customerMenu();
    } else
    {
        int log_sign;
        printf("Press 1 to Sign up!\n\n");
        printf("Already have an account? Press 2 to log in to the system!\n\n>");
        scanf("%d", &log_sign);
        system("cls");

        if(log_sign == 1)
        {
            sign();
        } else
        {
            //log();
        }
        adminMenu();
    }

    return 0;
}

void sign(void)
{
    struct user userinfo;

    FILE *fcred;
    fcred = fopen("credentials.txt", "r");

    printf(":::Create New Account:::\n\n");
    printf("\nPlease Enter a username:\n\n>");
    scanf(" %s", userinfo.userName);

    printf("Please Enter an email:\n\n>");
    scanf(" %s", userinfo.email);

    printf("Please Enter a password (Include both uppercase & lowercase letters along with numbers for a strong password):\n\n>");
    scanf(" %s", userinfo.password);

    fwrite(&userinfo, sizeof(struct user),1,fcred);

    fclose(fcred);
    system("cls");

    printf("You are good to go!\n");
    printf("Welcome aboard! Taking you to the order screen.");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    system("cls");
}

void log(void)
{

}















