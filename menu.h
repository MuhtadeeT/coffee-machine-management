#include <stdio.h>
#include <stdlib.h>
#include <dos.h>

int customerMenu(void);
int adminMenu(void);

int customerMenu(void)
{
    int water = 400;
    int milk = 540;
    int beans = 120;
    int cups = 9;
    int money = 550;

     int buy;
     if(buy != 4)
     {
     printf("\t{] Brew & Chew [}\n\n");
     printf("\nWhat do you want to buy? [1-4]\n1 - Espresso [$4]\n2 - Latte [$7]\n3 - Cappuccino [$6]\n4 - Exit\n>");
     scanf("%d", &buy);
    switch (buy) {
      case (1) : {
        if (water>=250) {
          if (beans>=16) {
            water -= 250;
            beans -= 16;
            money += 4;
            cups--;
            printf("\nHave enough resources, making you a coffee!.");
            sleep(1);
            printf(".");
            sleep(1);
            printf(".");
            sleep(1);
            system("cls");
            printf("Here is your coffee.\nThank you! Have a nice day!\n\n");

          } else {
            printf("\nSorry, not enough coffee beans! Please call a member of admin team. Sorry for the inconvenience.\n");
          }
        } else {
          printf("\nSorry, not enough water! Please call a member of admin team. Sorry for the inconvenience.\n");
        }
        break;
      }

      case (2) : {
        if (water>=350) {
          if (milk>=75) {
            if (beans>=20) {
              water -= 350;
              milk -= 75;
              beans -= 20;
              money += 7;
              cups--;
              printf("\nHave enough resources, making you a coffee!.");
            sleep(1);
            printf(".");
            sleep(1);
            printf(".");
            sleep(1);
            system("cls");
            printf("Here is your coffee.\nThank you! Have a nice day!\n\n");

            } else {
              printf("\nSorry, not enough coffee beans! Please call a member of admin team. Sorry for the inconvenience.\n");
            }
          } else {
            printf("\nSorry, not enough milk! Please call a member of admin team. Sorry for the inconvenience.\n");
          }

        } else {
          printf("\nSorry, not enough water! Please call a member of admin team. Sorry for the inconvenience.\n");
        }
        break;
      }

      case (3) : {
        if (water>=200) {
          if (milk>=100) {
            if (beans>=12) {
              water -= 200;
              milk -= 100;
              beans -= 12;
              money += 6;
              cups--;
              printf("\nHave enough resources, making you a coffee!.");
            sleep(1);
            printf(".");
            sleep(1);
            printf(".");
            sleep(1);
            system("cls");
            printf("Here is your coffee.\nThank you! Have a nice day!\n\n");

            } else {
              printf("\nSorry, not enough coffee beans! Please call a member of admin team. Sorry for the inconvenience.\n");
            }
          } else {
            printf("\nSorry, not enough milk! Please call a member of admin team. Sorry for the inconvenience.\n");
          }

        } else {
          printf("\nSorry, not enough water! Please call a member of admin team. Sorry for the inconvenience.\n");
        }
        break;
      }

      case (4) : {
        printf("\nThank you! Have a nice day!\n\n");
        sleep(1);
        break;
      }

    }
  }
  return 0;
}



int adminMenu(void)
{
    const input;
    int action = 0;
    int water = 400;
    int milk = 540;
    int beans = 120;
    int cups = 9;
    int money = 550;

    while (action != 4) {
        printf("\t{] Brew & Chew [}\n\n");
        printf("\nWrite action [1-4]\n1 - Fill\n2 - Take\n3 - Remaining\n4 - Exit\n>");
        scanf("%d", &input);
        system("cls");
        action = input;

  if (action == 3) {
    printf("\nThe coffee machine has:\n%d ml of water\n%d ml of milk\n%d g of coffee beans\n%d disposable cups\n%d taka\n", water, milk, beans, cups, money);
    sleep(5);
    system("cls");

  }

  if (action == 1) {
    int water1;
    printf("Write how many ml of water you want to add:\n");
    scanf("%d", &water1);
    int milk1;
    printf("Write how many ml of milk you want to add:\n");
    scanf("%d", &milk1);
    int beans1;
    printf("Write how many grams of coffee beans you want to add:\n");
    scanf("%d", &beans1);
    int cups1;
    printf("Write how many disposable coffee cups you want to add:\n");
    scanf("%d", &cups1);

    water += water1;
    milk += milk1;
    beans += beans1;
    cups += cups1;

    printf("Adding, please standby.");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf("Done!\n");
    sleep(1);
    system("cls");

  }

  if (action == 2) {
    printf("\n$%d withdrawn\n", money);
    sleep(2);
    money = 0;
    system("cls");
  }

  if (action == 4) {
    printf("\nThank You!Have a nice day!\n\n");
    sleep(1);
    break;
  }

}
    return 0;
}
