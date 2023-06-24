#include <stdio.h>
#include <stdlib.h>
#include <dos.h>

int customerMenu(void);
int adminMenu(void);

struct inventory
{
    int water;
    int milk;
    int beans;
    int cups;
    int money;
};

int customerMenu(void)
{
    FILE *finv;
    finv = fopen("inventory.txt", "w");

    struct inventory inv1;

    inv1.water = 400;
    inv1.milk = 540;
    inv1.beans = 120;
    inv1.cups = 9;
    inv1.money = 550;

     int buy;
     if(buy != 4)
     {
     printf(":::Brew & Chew:::\n\n");
     printf("\nWhat do you want to buy? [1-4]\n1 - Espresso [$4]\n2 - Latte [$7]\n3 - Cappuccino [$6]\n4 - Exit\n> ");
     scanf("%d", &buy);
    switch (buy) {
      case (1) : {
        if (inv1.water>=250) {
          if (inv1.beans>=16) {
            inv1.water -= 250;
            inv1.beans -= 16;
            inv1.money += 4;
            inv1.cups--;

            fwrite(&inv1, sizeof(struct inventory), 1, finv);

            system("cls");

            fclose(finv);

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
        if (inv1.water>=350) {
          if (inv1.milk>=75) {
            if (inv1.beans>=20) {
              inv1.water -= 350;
              inv1.milk -= 75;
              inv1.beans -= 20;
              inv1.money += 7;
              inv1.cups--;

              fwrite(&inv1, sizeof(struct inventory), 1, finv);

              system("cls");

              fclose(finv);

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
        if (inv1.water>=200) {
          if (inv1.milk>=100) {
            if (inv1.beans>=12) {
              inv1.water -= 200;
              inv1.milk -= 100;
              inv1.beans -= 12;
              inv1.money += 6;
              inv1.cups--;

              fwrite(&inv1, sizeof(struct inventory), 1, finv);

              system("cls");

              fclose(finv);

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
    FILE *finv;
    finv = fopen("inventory.txt", "w");

    struct inventory inv1;

    int input;
    int action = 0;
    inv1.water = 400;
    inv1.milk = 540;
    inv1.beans = 120;
    inv1.cups = 9;
    inv1.money = 550;

    while (action != 4) {
        printf(":::Brew & Chew:::\n\n");
        printf("\nWrite action [1-4]\n1 - Fill\n2 - Take\n3 - Remaining\n4 - Exit\n> ");
        scanf("%d", &input);
        system("cls");
        action = input;

  if (action == 3) {
    printf("\nThe coffee machine has:\n%d ml of water\n%d ml of milk\n%d g of coffee beans\n%d disposable cups\n$%d\n", inv1.water, inv1.milk, inv1.beans, inv1.cups, inv1.money);
    sleep(3);
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

    inv1.water += water1;
    inv1.milk += milk1;
    inv1.beans += beans1;
    inv1.cups += cups1;

    fwrite(&inv1, sizeof(struct inventory), 1, finv);

    system("cls");

    fclose(finv);

    printf("Adding, please standby.");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf(" Done!\n");
    sleep(1);
    system("cls");

  }

  if (action == 2) {
    printf("\n$%d withdrawn\n", inv1.money);
    sleep(2);
    inv1.money = 0;

    fwrite(&inv1, sizeof(struct inventory), 1, finv);
    system("cls");
    fclose(finv);
  }

  if (action == 4) {
    printf("\nThank You!Have a nice day!\n\n");
    sleep(1);
    break;
  }

}
    return 0;
}
