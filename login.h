#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dos.h>

void custlogging(void);
void custsign(void);
void admlogging(void);
void admsign(void);
int login(void);

struct user
{
    char userName[50];
    char email[50];
    char password[50];
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
            custsign();
        } else
        {
            custlogging();
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
            admsign();
        } else
        {
            admlogging();
        }
        adminMenu();
    }

    return 0;
}

void custsign(void)
{
    struct user userinfo;

    FILE *fcred;
    fcred = fopen("credentials.txt", "w");

    printf(":::Create New Account:::\n\n");
    printf("\nPlease Enter a username:\n\n>");
    scanf("%s", userinfo.userName);

    printf("\nPlease Enter an email:\n\n>");
    scanf("%s", userinfo.email);

    printf("\nPlease Enter a password (Include both uppercase & lowercase letters along with numbers for a strong password):\n\n>");
    scanf("%s", userinfo.password);

    fwrite(&userinfo, sizeof(struct user), 1, fcred);

    system("cls");

    if(fwrite != 0)
    {
        printf("You are good to go!\n");
        printf("Welcome aboard! Taking you to the login screen.");
        sleep(1);
        printf(".");
        sleep(1);
        printf(".");
        sleep(1);
        system("cls");

    } else
    {
        printf("error creating account !\n");
    }

    fclose(fcred);

    custlogging();
}

void custlogging(void)
{
    FILE *lgin;
    lgin = fopen("credentials.txt", "r");

    struct user userinfo;

    char username[50];
    char password[50];

    printf(":::Log In:::\n\n");
    printf("\nPlease Enter your username:\n\n>");
    scanf("%s", &username);

    printf("\nPlease Enter your password:\n\n>");
    scanf("%s", &password);

    system("cls");

    while(fread(&userinfo, sizeof(struct user), 1, lgin))
    {
        if(strcmp(userinfo.userName, username) == 0 && strcmp(userinfo.password, password) == 0)
        {
            printf("\nWelcome back! Taking you to the order screen.");
            sleep(1);
            printf(".");
            sleep(1);
            printf(".");
            sleep(1);
            system("cls");
        } else {
            printf("\nPlease write your username or password correctly.\n\n");
            sleep(2);
            system("cls");
            custlogging();
        }
    }

    fclose(lgin);
    system("cls");
}

void admsign(void)
{
    struct user userinfo;

    FILE *fcred;
    fcred = fopen("credentialsAdm.txt", "w");

    printf(":::Create New Account:::\n\n");
    printf("\nPlease Enter a username:\n\n>");
    scanf("%s", userinfo.userName);

    printf("\nPlease Enter an email:\n\n>");
    scanf("%s", userinfo.email);

    printf("\nPlease Enter a password (Include both uppercase & lowercase letters along with numbers for a strong password):\n\n>");
    scanf("%s", userinfo.password);

    fwrite(&userinfo, sizeof(struct user), 1, fcred);

    system("cls");

    if(fwrite != 0)
    {
        printf("You are good to go!\n");
        printf("Welcome aboard! Taking you to the management system.");
        sleep(1);
        printf(".");
        sleep(1);
        printf(".");
        sleep(1);
        system("cls");

    } else
    {
        printf("error creating account !\n");
    }

    fclose(fcred);

    admlogging();
}

void admlogging(void)
{
    FILE *lgin;
    lgin = fopen("credentialsAdm.txt", "r");

    struct user userinfo;

    char username[50];
    char password[50];

    printf(":::Log In:::\n\n");
    printf("\nPlease Enter your username:\n\n>");
    scanf("%s", &username);

    printf("\nPlease Enter your password:\n\n>");
    scanf("%s", &password);

    system("cls");

    while(fread(&userinfo, sizeof(struct user), 1, lgin))
    {
        if(strcmp(userinfo.userName, username) == 0 && strcmp(userinfo.password, password) == 0)
        {
            printf("\nWelcome back! Taking you to the management system.");
            sleep(1);
            printf(".");
            sleep(1);
            printf(".");
            sleep(1);
            system("cls");
        } else {
            printf("\nPlease write your username or password correctly.\n\n");
            sleep(2);
            system("cls");
            admlogging();
        }
    }

    fclose(lgin);
    system("cls");
}













